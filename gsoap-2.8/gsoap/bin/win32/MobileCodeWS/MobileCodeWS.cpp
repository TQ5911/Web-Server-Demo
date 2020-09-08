// MobileCodeWS.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
#include "MobileCodeWSSoap.nsmap"
#include "soapH.h"
#include <iostream>
#include <comdef.h>
#include <codecvt>
#include <cwctype>
int main()
{
	struct soap soap;

	int b = 0;
	class _ns1__getMobileCodeInfoResponse resultStr;
	class _ns1__getMobileCodeInfo a;
	soap_init(&soap);
	soap_set_mode(&soap, SOAP_C_MBSTRING);
	a.mobileCode = new wchar_t[20];
	wsprintf(a.mobileCode,L"15990070773");

	soap_call___ns1__getMobileCodeInfo(&soap, "http://ws.webxml.com.cn/WebServices/MobileCodeWS.asmx?WSDL", "", &a, resultStr);

	if (soap.error)
	{
		soap_print_fault(&soap, stderr);
	}
	else
	{
		std::wcout.imbue(std::locale("chs"));
		std::wcout << resultStr.getMobileCodeInfoResult << std::endl;
		delete []a.mobileCode;
	}
	soap_destroy(&soap);
	soap_end(&soap);
	soap_done(&soap);


    std::cout << "Hello World!\n";
}
