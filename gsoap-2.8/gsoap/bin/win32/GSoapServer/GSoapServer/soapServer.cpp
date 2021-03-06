/* soapServer.cpp
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

SOAP_SOURCE_STAMP("@(#) soapServer.cpp ver 2.8.106 2020-09-07 15:10:40 GMT")
extern "C" SOAP_FMAC5 int SOAP_FMAC6 soap_serve(struct soap *soap)
{
#ifndef WITH_FASTCGI
	soap->keep_alive = soap->max_keep_alive + 1;
#endif
	do
	{
#ifndef WITH_FASTCGI
		if (soap->keep_alive > 0 && soap->max_keep_alive > 0)
			soap->keep_alive--;
#endif
		if (soap_begin_serve(soap))
		{	if (soap->error >= SOAP_STOP)
				continue;
			return soap->error;
		}
		if ((soap_serve_request(soap) || (soap->fserveloop && soap->fserveloop(soap))) && soap->error && soap->error < SOAP_STOP)
		{
#ifdef WITH_FASTCGI
			soap_send_fault(soap);
#else
			return soap_send_fault(soap);
#endif
		}
#ifdef WITH_FASTCGI
		soap_destroy(soap);
		soap_end(soap);
	} while (1);
#else
	} while (soap->keep_alive);
#endif
	return SOAP_OK;
}

#ifndef WITH_NOSERVEREQUEST
extern "C" SOAP_FMAC5 int SOAP_FMAC6 soap_serve_request(struct soap *soap)
{
	(void)soap_peek_element(soap);
	if (!soap_match_tag(soap, soap->tag, "Add"))
		return soap_serve_Add(soap);
	if (!soap_match_tag(soap, soap->tag, "Sub"))
		return soap_serve_Sub(soap);
	if (!soap_match_tag(soap, soap->tag, "Mul"))
		return soap_serve_Mul(soap);
	if (!soap_match_tag(soap, soap->tag, "Div"))
		return soap_serve_Div(soap);
	return soap->error = SOAP_NO_METHOD;
}
#endif

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_Add(struct soap *soap)
{	struct Add soap_tmp_Add;
	struct AddResponse soap_tmp_AddResponse;
	int soap_tmp_int;
	soap_default_AddResponse(soap, &soap_tmp_AddResponse);
	soap_default_int(soap, &soap_tmp_int);
	soap_tmp_AddResponse.pResult = &soap_tmp_int;
	soap_default_Add(soap, &soap_tmp_Add);
	if (!soap_get_Add(soap, &soap_tmp_Add, "Add", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = Add(soap, soap_tmp_Add.nNum1, soap_tmp_Add.nNum2, soap_tmp_AddResponse.pResult);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize_AddResponse(soap, &soap_tmp_AddResponse);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put_AddResponse(soap, &soap_tmp_AddResponse, "AddResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put_AddResponse(soap, &soap_tmp_AddResponse, "AddResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_Sub(struct soap *soap)
{	struct Sub soap_tmp_Sub;
	struct SubResponse soap_tmp_SubResponse;
	int soap_tmp_int;
	soap_default_SubResponse(soap, &soap_tmp_SubResponse);
	soap_default_int(soap, &soap_tmp_int);
	soap_tmp_SubResponse.pResult = &soap_tmp_int;
	soap_default_Sub(soap, &soap_tmp_Sub);
	if (!soap_get_Sub(soap, &soap_tmp_Sub, "Sub", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = Sub(soap, soap_tmp_Sub.nNum1, soap_tmp_Sub.nNum2, soap_tmp_SubResponse.pResult);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize_SubResponse(soap, &soap_tmp_SubResponse);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put_SubResponse(soap, &soap_tmp_SubResponse, "SubResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put_SubResponse(soap, &soap_tmp_SubResponse, "SubResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_Mul(struct soap *soap)
{	struct Mul soap_tmp_Mul;
	struct MulResponse soap_tmp_MulResponse;
	int soap_tmp_int;
	soap_default_MulResponse(soap, &soap_tmp_MulResponse);
	soap_default_int(soap, &soap_tmp_int);
	soap_tmp_MulResponse.pResult = &soap_tmp_int;
	soap_default_Mul(soap, &soap_tmp_Mul);
	if (!soap_get_Mul(soap, &soap_tmp_Mul, "Mul", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = Mul(soap, soap_tmp_Mul.nNum1, soap_tmp_Mul.nNum2, soap_tmp_MulResponse.pResult);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize_MulResponse(soap, &soap_tmp_MulResponse);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put_MulResponse(soap, &soap_tmp_MulResponse, "MulResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put_MulResponse(soap, &soap_tmp_MulResponse, "MulResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_Div(struct soap *soap)
{	struct Div soap_tmp_Div;
	struct DivResponse soap_tmp_DivResponse;
	int soap_tmp_int;
	soap_default_DivResponse(soap, &soap_tmp_DivResponse);
	soap_default_int(soap, &soap_tmp_int);
	soap_tmp_DivResponse.pResult = &soap_tmp_int;
	soap_default_Div(soap, &soap_tmp_Div);
	if (!soap_get_Div(soap, &soap_tmp_Div, "Div", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = Div(soap, soap_tmp_Div.nNum1, soap_tmp_Div.nNum2, soap_tmp_DivResponse.pResult);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize_DivResponse(soap, &soap_tmp_DivResponse);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put_DivResponse(soap, &soap_tmp_DivResponse, "DivResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put_DivResponse(soap, &soap_tmp_DivResponse, "DivResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

#if defined(__BORLANDC__)
#pragma option pop
#pragma option pop
#endif

/* End of soapServer.cpp */
