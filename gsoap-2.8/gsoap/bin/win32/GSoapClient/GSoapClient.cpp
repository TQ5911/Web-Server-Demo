#include "GSoapClient.h"
#include "soapH.h"
#include "soap.nsmap"

int  main()
{
	struct soap math_soap;
	soap_init(&math_soap);
	int nResult = 0;
	const char* pWebService = "http://127.0.0.1:8686";
	soap_call_Add(&math_soap, pWebService, "", 60, 30, &nResult);
	if (math_soap.error)
	{
		soap_print_fault(&math_soap, stderr);
	}
	printf("webservice:60+30=%d\n", nResult);

	//////////////////////////////////////////

	soap_call_Sub(&math_soap, pWebService, "", 60, 30, &nResult);
	if (math_soap.error)
	{
		soap_print_fault(&math_soap, stderr);
	}
	printf("webservice:60-30=%d\n", nResult);

	//////////////////////////////////////////

	soap_call_Mul(&math_soap, pWebService, "", 60, 30, &nResult);
	if (math_soap.error)
	{
		soap_print_fault(&math_soap, stderr);
	}
	printf("webservice:60*30=%d\n", nResult);

	//////////////////////////////////////////

	soap_call_Div(&math_soap, pWebService, "", 60, 30, &nResult);
	if (math_soap.error)
	{
		soap_print_fault(&math_soap, stderr);
	}
	printf("webservice:60/30=%d\n", nResult);
	soap_end(&math_soap);
	soap_done(&math_soap);


	system("pause");
	return 0;
}