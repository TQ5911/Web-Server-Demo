#include "GSoapServer.h"
#include "soap.nsmap"

SOAP_FMAC5 int SOAP_FMAC6 Add(struct soap*, int nNum1, int nNum2, int *pResult)
{
	*pResult = nNum1 + nNum2;
	return SOAP_OK;
}

SOAP_FMAC5 int SOAP_FMAC6 Sub(struct soap*, int nNum1, int nNum2, int *pResult)
{
	*pResult = nNum1 - nNum2;
	return SOAP_OK;
}

SOAP_FMAC5 int SOAP_FMAC6 Mul(struct soap*, int nNum1, int nNum2, int *pResult)
{
	*pResult = nNum1 * nNum2;
	return SOAP_OK;
}

SOAP_FMAC5 int SOAP_FMAC6 Div(struct soap*, int nNum1, int nNum2, int *pResult)
{
	if (0 == nNum2)
	{
		*pResult = 0;
		return -1;
	}
	*pResult = nNum1 / nNum2;
	return SOAP_OK;
}

int main()
{
	struct soap math_service;
	soap_init(&math_service);

	// bind端口返回SOCKET套接字-雷同socket套接口函数服务器监听过程
	if (soap_bind(&math_service, NULL, 8686, 100) < 0)
	{
		soap_print_fault(&math_service, stderr);
		return -1;
	}
	fprintf(stderr, "start math webservice ...\n");

	// 当然这里可以用多个soap在多个现成中使用soap_new创建新的soap，每个线程一个
	while (true)
	{
		int nClient = (int)soap_accept(&math_service);
		if (nClient < 0)
		{
			soap_print_fault(&math_service, stderr);
			return -1;
		}
		fprintf(stderr, "client[%d] connect success. ..\n", nClient);
		soap_serve(&math_service);// provide service
		soap_end(&math_service);// end service
	}
	return 0;
}