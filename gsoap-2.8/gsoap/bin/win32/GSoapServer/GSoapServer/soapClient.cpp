/* soapClient.cpp
   Generated by gSOAP 2.8.106 for GSoapServer.h

gSOAP XML Web services tools
Copyright (C) 2000-2020, Robert van Engelen, Genivia Inc. All Rights Reserved.
The soapcpp2 tool and its generated software are released under the GPL.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

#if defined(__BORLANDC__)
#pragma option push -w-8060
#pragma option push -w-8004
#endif
#include "soapH.h"

SOAP_SOURCE_STAMP("@(#) soapClient.cpp ver 2.8.106 2020-09-07 15:10:40 GMT")


SOAP_FMAC5 int SOAP_FMAC6 soap_call_Add(struct soap *soap, const char *soap_endpoint, const char *soap_action, int nNum1, int nNum2, int *pResult)
{	if (soap_send_Add(soap, soap_endpoint, soap_action, nNum1, nNum2) || soap_recv_Add(soap, pResult))
		return soap->error;
	return SOAP_OK;
}

SOAP_FMAC5 int SOAP_FMAC6 soap_send_Add(struct soap *soap, const char *soap_endpoint, const char *soap_action, int nNum1, int nNum2)
{	struct Add soap_tmp_Add;
	soap_tmp_Add.nNum1 = nNum1;
	soap_tmp_Add.nNum2 = nNum2;
	soap_begin(soap);
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize_Add(soap, &soap_tmp_Add);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put_Add(soap, &soap_tmp_Add, "Add", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put_Add(soap, &soap_tmp_Add, "Add", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	return SOAP_OK;
}

SOAP_FMAC5 int SOAP_FMAC6 soap_recv_Add(struct soap *soap, int *pResult)
{
	struct AddResponse *soap_tmp_AddResponse;
	if (!pResult)
		return soap_closesock(soap);
	soap_default_int(soap, pResult);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	soap_tmp_AddResponse = soap_get_AddResponse(soap, NULL, "AddResponse", NULL);
	if (!soap_tmp_AddResponse || soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	if (pResult && soap_tmp_AddResponse->pResult)
		*pResult = *soap_tmp_AddResponse->pResult;
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call_Sub(struct soap *soap, const char *soap_endpoint, const char *soap_action, int nNum1, int nNum2, int *pResult)
{	if (soap_send_Sub(soap, soap_endpoint, soap_action, nNum1, nNum2) || soap_recv_Sub(soap, pResult))
		return soap->error;
	return SOAP_OK;
}

SOAP_FMAC5 int SOAP_FMAC6 soap_send_Sub(struct soap *soap, const char *soap_endpoint, const char *soap_action, int nNum1, int nNum2)
{	struct Sub soap_tmp_Sub;
	soap_tmp_Sub.nNum1 = nNum1;
	soap_tmp_Sub.nNum2 = nNum2;
	soap_begin(soap);
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize_Sub(soap, &soap_tmp_Sub);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put_Sub(soap, &soap_tmp_Sub, "Sub", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put_Sub(soap, &soap_tmp_Sub, "Sub", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	return SOAP_OK;
}

SOAP_FMAC5 int SOAP_FMAC6 soap_recv_Sub(struct soap *soap, int *pResult)
{
	struct SubResponse *soap_tmp_SubResponse;
	if (!pResult)
		return soap_closesock(soap);
	soap_default_int(soap, pResult);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	soap_tmp_SubResponse = soap_get_SubResponse(soap, NULL, "SubResponse", NULL);
	if (!soap_tmp_SubResponse || soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	if (pResult && soap_tmp_SubResponse->pResult)
		*pResult = *soap_tmp_SubResponse->pResult;
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call_Mul(struct soap *soap, const char *soap_endpoint, const char *soap_action, int nNum1, int nNum2, int *pResult)
{	if (soap_send_Mul(soap, soap_endpoint, soap_action, nNum1, nNum2) || soap_recv_Mul(soap, pResult))
		return soap->error;
	return SOAP_OK;
}

SOAP_FMAC5 int SOAP_FMAC6 soap_send_Mul(struct soap *soap, const char *soap_endpoint, const char *soap_action, int nNum1, int nNum2)
{	struct Mul soap_tmp_Mul;
	soap_tmp_Mul.nNum1 = nNum1;
	soap_tmp_Mul.nNum2 = nNum2;
	soap_begin(soap);
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize_Mul(soap, &soap_tmp_Mul);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put_Mul(soap, &soap_tmp_Mul, "Mul", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put_Mul(soap, &soap_tmp_Mul, "Mul", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	return SOAP_OK;
}

SOAP_FMAC5 int SOAP_FMAC6 soap_recv_Mul(struct soap *soap, int *pResult)
{
	struct MulResponse *soap_tmp_MulResponse;
	if (!pResult)
		return soap_closesock(soap);
	soap_default_int(soap, pResult);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	soap_tmp_MulResponse = soap_get_MulResponse(soap, NULL, "MulResponse", NULL);
	if (!soap_tmp_MulResponse || soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	if (pResult && soap_tmp_MulResponse->pResult)
		*pResult = *soap_tmp_MulResponse->pResult;
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call_Div(struct soap *soap, const char *soap_endpoint, const char *soap_action, int nNum1, int nNum2, int *pResult)
{	if (soap_send_Div(soap, soap_endpoint, soap_action, nNum1, nNum2) || soap_recv_Div(soap, pResult))
		return soap->error;
	return SOAP_OK;
}

SOAP_FMAC5 int SOAP_FMAC6 soap_send_Div(struct soap *soap, const char *soap_endpoint, const char *soap_action, int nNum1, int nNum2)
{	struct Div soap_tmp_Div;
	soap_tmp_Div.nNum1 = nNum1;
	soap_tmp_Div.nNum2 = nNum2;
	soap_begin(soap);
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize_Div(soap, &soap_tmp_Div);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put_Div(soap, &soap_tmp_Div, "Div", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put_Div(soap, &soap_tmp_Div, "Div", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	return SOAP_OK;
}

SOAP_FMAC5 int SOAP_FMAC6 soap_recv_Div(struct soap *soap, int *pResult)
{
	struct DivResponse *soap_tmp_DivResponse;
	if (!pResult)
		return soap_closesock(soap);
	soap_default_int(soap, pResult);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	soap_tmp_DivResponse = soap_get_DivResponse(soap, NULL, "DivResponse", NULL);
	if (!soap_tmp_DivResponse || soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	if (pResult && soap_tmp_DivResponse->pResult)
		*pResult = *soap_tmp_DivResponse->pResult;
	return soap_closesock(soap);
}

#if defined(__BORLANDC__)
#pragma option pop
#pragma option pop
#endif

/* End of soapClient.cpp */
