/* MobileCodeWS.h
   Generated by wsdl2h 2.8.106 from http://ws.webxml.com.cn/WebServices/MobileCodeWS.asmx?WSDL and mytypemap.dat
   2020-09-08 03:08:44 GMT

   DO NOT INCLUDE THIS ANNOTATED FILE DIRECTLY IN YOUR PROJECT SOURCE CODE.
   USE THE FILES GENERATED BY soapcpp2 FOR YOUR PROJECT'S SOURCE CODE.

gSOAP XML Web services tools
Copyright (C) 2000-2020, Robert van Engelen, Genivia Inc. All Rights Reserved.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

/**

@page page_notes Notes

@note HINTS:
 - Run soapcpp2 on MobileCodeWS.h to generate the SOAP/XML processing logic:
   Use soapcpp2 -I to specify paths for #import
   Use soapcpp2 -j to generate improved proxy and server classes.
   Use soapcpp2 -r to generate a report.
 - Edit 'typemap.dat' to control namespace bindings and type mappings:
   It is strongly recommended to customize the names of the namespace prefixes
   generated by wsdl2h. To do so, modify the prefix bindings in the Namespaces
   section below and add the modified lines to 'typemap.dat' to rerun wsdl2h.
 - Run Doxygen (www.doxygen.org) on this file to generate documentation.
 - Use wsdl2h -c to generate pure C code.
 - Use wsdl2h -R to include the REST operations defined by the WSDLs.
 - Use wsdl2h -O3 or -O4 to optimize by removing unused schema components.
 - Use wsdl2h -d to enable DOM support for xsd:any and xsd:anyType.
 - Use wsdl2h -F to simulate struct-type derivation in C (also works in C++).
 - Use wsdl2h -f to generate flat C++ class hierarchy, removes type derivation.
 - Use wsdl2h -g to generate top-level root elements with readers and writers.
 - Use wsdl2h -U to map XML names to C++ Unicode identifiers instead of _xNNNN.
 - Use wsdl2h -u to disable the generation of unions.
 - Use wsdl2h -L to remove this @note and all other @note comments.
 - Use wsdl2h -nname to use name as the base namespace prefix instead of 'ns'.
 - Use wsdl2h -Nname for service prefix and produce multiple service bindings
 - Struct/class members serialized as XML attributes are annotated with a '@'.
 - Struct/class members that have a special role are annotated with a '$'.

@warning
   DO NOT INCLUDE THIS ANNOTATED FILE DIRECTLY IN YOUR PROJECT SOURCE CODE.
   USE THE FILES GENERATED BY soapcpp2 FOR YOUR PROJECT'S SOURCE CODE:
   THE GENERATED soapStub.h FILE CONTAINS THIS CONTENT WITHOUT ANNOTATIONS.

@copyright LICENSE:
@verbatim
--------------------------------------------------------------------------------
gSOAP XML Web services tools
Copyright (C) 2000-2020, Robert van Engelen, Genivia Inc. All Rights Reserved.
The wsdl2h tool and its generated software are released under the GPL.
This software is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
GPL license.

This program is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free Software
Foundation; either version 2 of the License, or (at your option) any later
version.

This program is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
PARTICULAR PURPOSE. See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with
this program; if not, write to the Free Software Foundation, Inc., 59 Temple
Place, Suite 330, Boston, MA 02111-1307 USA

Author contact information:
engelen@genivia.com / engelen@acm.org

This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial-use license is available from Genivia, Inc., contact@genivia.com
--------------------------------------------------------------------------------
@endverbatim

*/


//gsoapopt c++,w

/******************************************************************************\
 *                                                                            *
 * Definitions                                                                *
 *   http://WebXml.com.cn/                                                    *
 *                                                                            *
\******************************************************************************/

/* WSDL Documentation:

<a href="http://www.webxml.com.cn/" target="_blank">WebXml.com.cn</a> <strong>WEB</strong><br
/> WEB <a href="http://www.webxml.com.cn/"
target="_blank">http://www.webxml.com.cn/</a> <br />&nbsp;
*/


/******************************************************************************\
 *                                                                            *
 * $SIZE typemap variable:                                                    *
 *   int                                                                      *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Import                                                                     *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Schema Namespaces                                                          *
 *                                                                            *
\******************************************************************************/


/* NOTE:

It is strongly recommended to customize the names of the namespace prefixes
generated by wsdl2h. To do so, modify the prefix bindings below and add the
modified lines to 'typemap.dat' then rerun wsdl2h (use wsdl2h -t typemap.dat):

ns1 = "http://WebXml.com.cn/"

*/

#define SOAP_NAMESPACE_OF_ns1	"http://WebXml.com.cn/"
//gsoap ns1   schema namespace:	http://WebXml.com.cn/
//gsoap ns1   schema elementForm:	qualified
//gsoap ns1   schema attributeForm:	unqualified

/******************************************************************************\
 *                                                                            *
 * Built-in Schema Types and Top-Level Elements and Attributes                *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Forward Declarations                                                       *
 *                                                                            *
\******************************************************************************/


class ns1__ArrayOfString;

class _ns1__getMobileCodeInfo;

class _ns1__getMobileCodeInfoResponse;

class _ns1__getDatabaseInfo;

class _ns1__getDatabaseInfoResponse;


/******************************************************************************\
 *                                                                            *
 * Schema Types and Top-Level Elements and Attributes                         *
 *   http://WebXml.com.cn/                                                    *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Schema Complex Types and Top-Level Elements                                *
 *   http://WebXml.com.cn/                                                    *
 *                                                                            *
\******************************************************************************/

/// @brief "http://WebXml.com.cn/":ArrayOfString is a complexType.
///
/// @note class ns1__ArrayOfString operations:
/// - ns1__ArrayOfString* soap_new_ns1__ArrayOfString(soap*) allocate and default initialize
/// - ns1__ArrayOfString* soap_new_ns1__ArrayOfString(soap*, int num) allocate and default initialize an array
/// - ns1__ArrayOfString* soap_new_req_ns1__ArrayOfString(soap*, ...) allocate, set required members
/// - ns1__ArrayOfString* soap_new_set_ns1__ArrayOfString(soap*, ...) allocate, set all public members
/// - ns1__ArrayOfString::soap_default(soap*) default initialize members
/// - int soap_read_ns1__ArrayOfString(soap*, ns1__ArrayOfString*) deserialize from a stream
/// - int soap_write_ns1__ArrayOfString(soap*, ns1__ArrayOfString*) serialize to a stream
/// - ns1__ArrayOfString* ns1__ArrayOfString::soap_dup(soap*) returns deep copy of ns1__ArrayOfString, copies the (cyclic) graph structure when a context is provided, or (cycle-pruned) tree structure with soap_set_mode(soap, SOAP_XML_TREE) (use soapcpp2 -Ec)
/// - ns1__ArrayOfString::soap_del() deep deletes ns1__ArrayOfString data members, use only after ns1__ArrayOfString::soap_dup(NULL) (use soapcpp2 -Ed)
/// - int ns1__ArrayOfString::soap_type() returns SOAP_TYPE_ns1__ArrayOfString or derived type identifier
class ns1__ArrayOfString
{ public:
/// Size of array of std::wstring is 0..unbounded.
  $ int                                  __sizestring                   0;
/// Pointer to array std::wstring of size 0..unbounded.
    std::wstring                        *string                         0;	///< Multiple elements.
/// Pointer to soap context that manages this instance.
    struct soap                         *soap                          ;
};

/// @brief Top-level root element "http://WebXml.com.cn/":getMobileCodeInfo
/// @brief "http://WebXml.com.cn/":getMobileCodeInfo is a complexType.
///
/// @note class _ns1__getMobileCodeInfo operations:
/// - _ns1__getMobileCodeInfo* soap_new__ns1__getMobileCodeInfo(soap*) allocate and default initialize
/// - _ns1__getMobileCodeInfo* soap_new__ns1__getMobileCodeInfo(soap*, int num) allocate and default initialize an array
/// - _ns1__getMobileCodeInfo* soap_new_req__ns1__getMobileCodeInfo(soap*, ...) allocate, set required members
/// - _ns1__getMobileCodeInfo* soap_new_set__ns1__getMobileCodeInfo(soap*, ...) allocate, set all public members
/// - _ns1__getMobileCodeInfo::soap_default(soap*) default initialize members
/// - int soap_read__ns1__getMobileCodeInfo(soap*, _ns1__getMobileCodeInfo*) deserialize from a stream
/// - int soap_write__ns1__getMobileCodeInfo(soap*, _ns1__getMobileCodeInfo*) serialize to a stream
/// - _ns1__getMobileCodeInfo* _ns1__getMobileCodeInfo::soap_dup(soap*) returns deep copy of _ns1__getMobileCodeInfo, copies the (cyclic) graph structure when a context is provided, or (cycle-pruned) tree structure with soap_set_mode(soap, SOAP_XML_TREE) (use soapcpp2 -Ec)
/// - _ns1__getMobileCodeInfo::soap_del() deep deletes _ns1__getMobileCodeInfo data members, use only after _ns1__getMobileCodeInfo::soap_dup(NULL) (use soapcpp2 -Ed)
/// - int _ns1__getMobileCodeInfo::soap_type() returns SOAP_TYPE__ns1__getMobileCodeInfo or derived type identifier
class _ns1__getMobileCodeInfo
{ public:
/// Element "mobileCode" of type xs:string.
    wchar_t*                             mobileCode                     0;	///< Optional element.
/// Element "userID" of type xs:string.
    wchar_t*                             userID                         0;	///< Optional element.
/// Pointer to soap context that manages this instance.
    struct soap                         *soap                          ;
};

/// @brief Top-level root element "http://WebXml.com.cn/":getMobileCodeInfoResponse
/// @brief "http://WebXml.com.cn/":getMobileCodeInfoResponse is a complexType.
///
/// @note class _ns1__getMobileCodeInfoResponse operations:
/// - _ns1__getMobileCodeInfoResponse* soap_new__ns1__getMobileCodeInfoResponse(soap*) allocate and default initialize
/// - _ns1__getMobileCodeInfoResponse* soap_new__ns1__getMobileCodeInfoResponse(soap*, int num) allocate and default initialize an array
/// - _ns1__getMobileCodeInfoResponse* soap_new_req__ns1__getMobileCodeInfoResponse(soap*, ...) allocate, set required members
/// - _ns1__getMobileCodeInfoResponse* soap_new_set__ns1__getMobileCodeInfoResponse(soap*, ...) allocate, set all public members
/// - _ns1__getMobileCodeInfoResponse::soap_default(soap*) default initialize members
/// - int soap_read__ns1__getMobileCodeInfoResponse(soap*, _ns1__getMobileCodeInfoResponse*) deserialize from a stream
/// - int soap_write__ns1__getMobileCodeInfoResponse(soap*, _ns1__getMobileCodeInfoResponse*) serialize to a stream
/// - _ns1__getMobileCodeInfoResponse* _ns1__getMobileCodeInfoResponse::soap_dup(soap*) returns deep copy of _ns1__getMobileCodeInfoResponse, copies the (cyclic) graph structure when a context is provided, or (cycle-pruned) tree structure with soap_set_mode(soap, SOAP_XML_TREE) (use soapcpp2 -Ec)
/// - _ns1__getMobileCodeInfoResponse::soap_del() deep deletes _ns1__getMobileCodeInfoResponse data members, use only after _ns1__getMobileCodeInfoResponse::soap_dup(NULL) (use soapcpp2 -Ed)
/// - int _ns1__getMobileCodeInfoResponse::soap_type() returns SOAP_TYPE__ns1__getMobileCodeInfoResponse or derived type identifier
class _ns1__getMobileCodeInfoResponse
{ public:
/// Element "getMobileCodeInfoResult" of type xs:string.
    wchar_t*                             getMobileCodeInfoResult        0;	///< Optional element.
/// Pointer to soap context that manages this instance.
    struct soap                         *soap                          ;
};

/// @brief Top-level root element "http://WebXml.com.cn/":getDatabaseInfo
/// @brief "http://WebXml.com.cn/":getDatabaseInfo is a complexType.
///
/// @note class _ns1__getDatabaseInfo operations:
/// - _ns1__getDatabaseInfo* soap_new__ns1__getDatabaseInfo(soap*) allocate and default initialize
/// - _ns1__getDatabaseInfo* soap_new__ns1__getDatabaseInfo(soap*, int num) allocate and default initialize an array
/// - _ns1__getDatabaseInfo* soap_new_req__ns1__getDatabaseInfo(soap*, ...) allocate, set required members
/// - _ns1__getDatabaseInfo* soap_new_set__ns1__getDatabaseInfo(soap*, ...) allocate, set all public members
/// - _ns1__getDatabaseInfo::soap_default(soap*) default initialize members
/// - int soap_read__ns1__getDatabaseInfo(soap*, _ns1__getDatabaseInfo*) deserialize from a stream
/// - int soap_write__ns1__getDatabaseInfo(soap*, _ns1__getDatabaseInfo*) serialize to a stream
/// - _ns1__getDatabaseInfo* _ns1__getDatabaseInfo::soap_dup(soap*) returns deep copy of _ns1__getDatabaseInfo, copies the (cyclic) graph structure when a context is provided, or (cycle-pruned) tree structure with soap_set_mode(soap, SOAP_XML_TREE) (use soapcpp2 -Ec)
/// - _ns1__getDatabaseInfo::soap_del() deep deletes _ns1__getDatabaseInfo data members, use only after _ns1__getDatabaseInfo::soap_dup(NULL) (use soapcpp2 -Ed)
/// - int _ns1__getDatabaseInfo::soap_type() returns SOAP_TYPE__ns1__getDatabaseInfo or derived type identifier
class _ns1__getDatabaseInfo
{ public:
/// Pointer to soap context that manages this instance.
    struct soap                         *soap                          ;
};

/// @brief Top-level root element "http://WebXml.com.cn/":getDatabaseInfoResponse
/// @brief "http://WebXml.com.cn/":getDatabaseInfoResponse is a complexType.
///
/// @note class _ns1__getDatabaseInfoResponse operations:
/// - _ns1__getDatabaseInfoResponse* soap_new__ns1__getDatabaseInfoResponse(soap*) allocate and default initialize
/// - _ns1__getDatabaseInfoResponse* soap_new__ns1__getDatabaseInfoResponse(soap*, int num) allocate and default initialize an array
/// - _ns1__getDatabaseInfoResponse* soap_new_req__ns1__getDatabaseInfoResponse(soap*, ...) allocate, set required members
/// - _ns1__getDatabaseInfoResponse* soap_new_set__ns1__getDatabaseInfoResponse(soap*, ...) allocate, set all public members
/// - _ns1__getDatabaseInfoResponse::soap_default(soap*) default initialize members
/// - int soap_read__ns1__getDatabaseInfoResponse(soap*, _ns1__getDatabaseInfoResponse*) deserialize from a stream
/// - int soap_write__ns1__getDatabaseInfoResponse(soap*, _ns1__getDatabaseInfoResponse*) serialize to a stream
/// - _ns1__getDatabaseInfoResponse* _ns1__getDatabaseInfoResponse::soap_dup(soap*) returns deep copy of _ns1__getDatabaseInfoResponse, copies the (cyclic) graph structure when a context is provided, or (cycle-pruned) tree structure with soap_set_mode(soap, SOAP_XML_TREE) (use soapcpp2 -Ec)
/// - _ns1__getDatabaseInfoResponse::soap_del() deep deletes _ns1__getDatabaseInfoResponse data members, use only after _ns1__getDatabaseInfoResponse::soap_dup(NULL) (use soapcpp2 -Ed)
/// - int _ns1__getDatabaseInfoResponse::soap_type() returns SOAP_TYPE__ns1__getDatabaseInfoResponse or derived type identifier
class _ns1__getDatabaseInfoResponse
{ public:
/// Element "getDatabaseInfoResult" of type "http://WebXml.com.cn/":ArrayOfString.
    ns1__ArrayOfString*                  getDatabaseInfoResult          0;	///< Optional element.
/// Pointer to soap context that manages this instance.
    struct soap                         *soap                          ;
};


/******************************************************************************\
 *                                                                            *
 * Additional Top-Level Elements                                              *
 *   http://WebXml.com.cn/                                                    *
 *                                                                            *
\******************************************************************************/

/// @brief Top-level root element "http://WebXml.com.cn/":string of type xs:string.
/// @note Use wsdl2h option -g to auto-generate a top-level root element declaration.

/// @brief Top-level root element "http://WebXml.com.cn/":ArrayOfString of type "http://WebXml.com.cn/":ArrayOfString.
/// @note Use wsdl2h option -g to auto-generate a top-level root element declaration.


/******************************************************************************\
 *                                                                            *
 * Additional Top-Level Attributes                                            *
 *   http://WebXml.com.cn/                                                    *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Services                                                                   *
 *                                                                            *
\******************************************************************************/

// This service supports SOAP 1.2 namespaces:
#import "soap12.h"

//gsoap ns1  service name:	MobileCodeWSSoap 
//gsoap ns1  service type:	MobileCodeWSSoap 
//gsoap ns1  service port:	http://ws.webxml.com.cn/WebServices/MobileCodeWS.asmx 
//gsoap ns1  service namespace:	http://WebXml.com.cn/ 
//gsoap ns1  service transport:	http://schemas.xmlsoap.org/soap/http 

/** @mainpage Service Definitions

@section Service_documentation Documentation
<a href="http://www.webxml.com.cn/" target="_blank">WebXml.com.cn</a> <strong>WEB</strong><br
/> WEB <a href="http://www.webxml.com.cn/"
target="_blank">http://www.webxml.com.cn/</a> <br />&nbsp;

@section Service_bindings Service Bindings

  - @ref MobileCodeWSSoap

@section Service_more More Information

  - @ref page_notes "Notes"

  - @ref page_XMLDataBinding "XML Data Binding"

  - @ref SOAP_ENV__Header "SOAP Header Content" (when applicable)

  - @ref SOAP_ENV__Detail "SOAP Fault Detail Content" (when applicable)


*/

/** @page MobileCodeWSSoap Binding "MobileCodeWSSoap"

@section MobileCodeWSSoap_service Service Documentation "MobileCodeWSSoap"
<a href="http://www.webxml.com.cn/" target="_blank">WebXml.com.cn</a> <strong>WEB</strong><br
/> WEB <a href="http://www.webxml.com.cn/"
target="_blank">http://www.webxml.com.cn/</a> <br />&nbsp;

@section MobileCodeWSSoap_operations Operations of Binding "MobileCodeWSSoap"

  - @ref __ns1__getMobileCodeInfo

  - @ref __ns1__getDatabaseInfo

  - @ref __ns1__getMobileCodeInfo_

  - @ref __ns1__getDatabaseInfo_

@section MobileCodeWSSoap_ports Default endpoints of Binding "MobileCodeWSSoap"

  - http://ws.webxml.com.cn/WebServices/MobileCodeWS.asmx

@note Multiple service bindings collected as one, use wsdl2h option -Nname to produce a separate service for each binding


*/

/******************************************************************************\
 *                                                                            *
 * Service Binding                                                            *
 *   MobileCodeWSSoap                                                         *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Service Operation                                                          *
 *   __ns1__getMobileCodeInfo                                                 *
 *                                                                            *
\******************************************************************************/


/** Operation "__ns1__getMobileCodeInfo" of service binding "MobileCodeWSSoap".
<br /><h3></h3><p>mobileCode
= 7userID = ID

 </p><br />

  - SOAP document/literal style messaging

  - Default endpoints:
    - http://ws.webxml.com.cn/WebServices/MobileCodeWS.asmx

  - Default SOAP action or REST location path:
    - "http://WebXml.com.cn/getMobileCodeInfo"

  - Addressing input action: "http://WebXml.com.cn/getMobileCodeInfo"

  - Addressing output action: "http://WebXml.com.cn/getMobileCodeInfoResponse"

C stub function (defined in soapClient.c[pp] generated by soapcpp2):
@code
  int soap_call___ns1__getMobileCodeInfo(
    struct soap *soap,
    NULL, // char *endpoint = NULL selects default endpoint for this operation
    NULL, // char *action = NULL selects default action for this operation
    // input parameters:
    _ns1__getMobileCodeInfo*            ns1__getMobileCodeInfo,
    // output parameters:
    _ns1__getMobileCodeInfoResponse    &ns1__getMobileCodeInfoResponse
  );
@endcode

C server function (called from the service dispatcher defined in soapServer.c[pp]):
@code
  int __ns1__getMobileCodeInfo(
    struct soap *soap,
    // input parameters:
    _ns1__getMobileCodeInfo*            ns1__getMobileCodeInfo,
    // output parameters:
    _ns1__getMobileCodeInfoResponse    &ns1__getMobileCodeInfoResponse
  );
@endcode

C++ proxy class (defined in soapMobileCodeWSSoapProxy.h generated with soapcpp2):
@code
  class MobileCodeWSSoapProxy;
@endcode
Important: use soapcpp2 option '-j' (or '-i') to generate improved and easy-to-use proxy classes;

C++ service class (defined in soapMobileCodeWSSoapService.h generated with soapcpp2):
@code
  class MobileCodeWSSoapService;
@endcode
Important: use soapcpp2 option '-j' (or '-i') to generate improved and easy-to-use service classes;

*/

//gsoap ns1  service method-protocol:	getMobileCodeInfo SOAP
//gsoap ns1  service method-style:	getMobileCodeInfo document
//gsoap ns1  service method-encoding:	getMobileCodeInfo literal
//gsoap ns1  service method-input-action:	getMobileCodeInfo http://WebXml.com.cn/getMobileCodeInfo
//gsoap ns1  service method-output-action:	getMobileCodeInfo http://WebXml.com.cn/getMobileCodeInfoResponse
int __ns1__getMobileCodeInfo(
    _ns1__getMobileCodeInfo*            ns1__getMobileCodeInfo,	///< Input parameter
    _ns1__getMobileCodeInfoResponse    &ns1__getMobileCodeInfoResponse	///< Output parameter
);

/******************************************************************************\
 *                                                                            *
 * Service Operation                                                          *
 *   __ns1__getDatabaseInfo                                                   *
 *                                                                            *
\******************************************************************************/


/** Operation "__ns1__getDatabaseInfo" of service binding "MobileCodeWSSoap".
<br /><h3></h3><p>
 </p><br />

  - SOAP document/literal style messaging

  - Default endpoints:
    - http://ws.webxml.com.cn/WebServices/MobileCodeWS.asmx

  - Default SOAP action or REST location path:
    - "http://WebXml.com.cn/getDatabaseInfo"

  - Addressing input action: "http://WebXml.com.cn/getDatabaseInfo"

  - Addressing output action: "http://WebXml.com.cn/getDatabaseInfoResponse"

C stub function (defined in soapClient.c[pp] generated by soapcpp2):
@code
  int soap_call___ns1__getDatabaseInfo(
    struct soap *soap,
    NULL, // char *endpoint = NULL selects default endpoint for this operation
    NULL, // char *action = NULL selects default action for this operation
    // input parameters:
    _ns1__getDatabaseInfo*              ns1__getDatabaseInfo,
    // output parameters:
    _ns1__getDatabaseInfoResponse      &ns1__getDatabaseInfoResponse
  );
@endcode

C server function (called from the service dispatcher defined in soapServer.c[pp]):
@code
  int __ns1__getDatabaseInfo(
    struct soap *soap,
    // input parameters:
    _ns1__getDatabaseInfo*              ns1__getDatabaseInfo,
    // output parameters:
    _ns1__getDatabaseInfoResponse      &ns1__getDatabaseInfoResponse
  );
@endcode

C++ proxy class (defined in soapMobileCodeWSSoapProxy.h generated with soapcpp2):
@code
  class MobileCodeWSSoapProxy;
@endcode
Important: use soapcpp2 option '-j' (or '-i') to generate improved and easy-to-use proxy classes;

C++ service class (defined in soapMobileCodeWSSoapService.h generated with soapcpp2):
@code
  class MobileCodeWSSoapService;
@endcode
Important: use soapcpp2 option '-j' (or '-i') to generate improved and easy-to-use service classes;

*/

//gsoap ns1  service method-protocol:	getDatabaseInfo SOAP
//gsoap ns1  service method-style:	getDatabaseInfo document
//gsoap ns1  service method-encoding:	getDatabaseInfo literal
//gsoap ns1  service method-input-action:	getDatabaseInfo http://WebXml.com.cn/getDatabaseInfo
//gsoap ns1  service method-output-action:	getDatabaseInfo http://WebXml.com.cn/getDatabaseInfoResponse
int __ns1__getDatabaseInfo(
    _ns1__getDatabaseInfo*              ns1__getDatabaseInfo,	///< Input parameter
    _ns1__getDatabaseInfoResponse      &ns1__getDatabaseInfoResponse	///< Output parameter
);

/******************************************************************************\
 *                                                                            *
 * Service Operation                                                          *
 *   __ns1__getMobileCodeInfo_                                                *
 *                                                                            *
\******************************************************************************/


/** Operation "__ns1__getMobileCodeInfo_" of service binding "MobileCodeWSSoap".
<br /><h3></h3><p>mobileCode
= 7userID = ID

 </p><br />

  - SOAP document/literal style messaging

  - Default endpoints:
    - http://ws.webxml.com.cn/WebServices/MobileCodeWS.asmx

  - Default SOAP action or REST location path:
    - "http://WebXml.com.cn/getMobileCodeInfo"

  - Addressing input action: "http://WebXml.com.cn/getMobileCodeInfo"

  - Addressing output action: "http://WebXml.com.cn/getMobileCodeInfoResponse"

C stub function (defined in soapClient.c[pp] generated by soapcpp2):
@code
  int soap_call___ns1__getMobileCodeInfo_(
    struct soap *soap,
    NULL, // char *endpoint = NULL selects default endpoint for this operation
    NULL, // char *action = NULL selects default action for this operation
    // input parameters:
    _ns1__getMobileCodeInfo*            ns1__getMobileCodeInfo,
    // output parameters:
    _ns1__getMobileCodeInfoResponse    &ns1__getMobileCodeInfoResponse
  );
@endcode

C server function (called from the service dispatcher defined in soapServer.c[pp]):
@code
  int __ns1__getMobileCodeInfo_(
    struct soap *soap,
    // input parameters:
    _ns1__getMobileCodeInfo*            ns1__getMobileCodeInfo,
    // output parameters:
    _ns1__getMobileCodeInfoResponse    &ns1__getMobileCodeInfoResponse
  );
@endcode

C++ proxy class (defined in soapMobileCodeWSSoapProxy.h generated with soapcpp2):
@code
  class MobileCodeWSSoapProxy;
@endcode
Important: use soapcpp2 option '-j' (or '-i') to generate improved and easy-to-use proxy classes;

C++ service class (defined in soapMobileCodeWSSoapService.h generated with soapcpp2):
@code
  class MobileCodeWSSoapService;
@endcode
Important: use soapcpp2 option '-j' (or '-i') to generate improved and easy-to-use service classes;

*/

//gsoap ns1  service method-protocol:	getMobileCodeInfo_ SOAP
//gsoap ns1  service method-style:	getMobileCodeInfo_ document
//gsoap ns1  service method-encoding:	getMobileCodeInfo_ literal
//gsoap ns1  service method-input-action:	getMobileCodeInfo_ http://WebXml.com.cn/getMobileCodeInfo
//gsoap ns1  service method-output-action:	getMobileCodeInfo_ http://WebXml.com.cn/getMobileCodeInfoResponse
int __ns1__getMobileCodeInfo_(
    _ns1__getMobileCodeInfo*            ns1__getMobileCodeInfo,	///< Input parameter
    _ns1__getMobileCodeInfoResponse    &ns1__getMobileCodeInfoResponse	///< Output parameter
);

/******************************************************************************\
 *                                                                            *
 * Service Operation                                                          *
 *   __ns1__getDatabaseInfo_                                                  *
 *                                                                            *
\******************************************************************************/


/** Operation "__ns1__getDatabaseInfo_" of service binding "MobileCodeWSSoap".
<br /><h3></h3><p>
 </p><br />

  - SOAP document/literal style messaging

  - Default endpoints:
    - http://ws.webxml.com.cn/WebServices/MobileCodeWS.asmx

  - Default SOAP action or REST location path:
    - "http://WebXml.com.cn/getDatabaseInfo"

  - Addressing input action: "http://WebXml.com.cn/getDatabaseInfo"

  - Addressing output action: "http://WebXml.com.cn/getDatabaseInfoResponse"

C stub function (defined in soapClient.c[pp] generated by soapcpp2):
@code
  int soap_call___ns1__getDatabaseInfo_(
    struct soap *soap,
    NULL, // char *endpoint = NULL selects default endpoint for this operation
    NULL, // char *action = NULL selects default action for this operation
    // input parameters:
    _ns1__getDatabaseInfo*              ns1__getDatabaseInfo,
    // output parameters:
    _ns1__getDatabaseInfoResponse      &ns1__getDatabaseInfoResponse
  );
@endcode

C server function (called from the service dispatcher defined in soapServer.c[pp]):
@code
  int __ns1__getDatabaseInfo_(
    struct soap *soap,
    // input parameters:
    _ns1__getDatabaseInfo*              ns1__getDatabaseInfo,
    // output parameters:
    _ns1__getDatabaseInfoResponse      &ns1__getDatabaseInfoResponse
  );
@endcode

C++ proxy class (defined in soapMobileCodeWSSoapProxy.h generated with soapcpp2):
@code
  class MobileCodeWSSoapProxy;
@endcode
Important: use soapcpp2 option '-j' (or '-i') to generate improved and easy-to-use proxy classes;

C++ service class (defined in soapMobileCodeWSSoapService.h generated with soapcpp2):
@code
  class MobileCodeWSSoapService;
@endcode
Important: use soapcpp2 option '-j' (or '-i') to generate improved and easy-to-use service classes;

*/

//gsoap ns1  service method-protocol:	getDatabaseInfo_ SOAP
//gsoap ns1  service method-style:	getDatabaseInfo_ document
//gsoap ns1  service method-encoding:	getDatabaseInfo_ literal
//gsoap ns1  service method-input-action:	getDatabaseInfo_ http://WebXml.com.cn/getDatabaseInfo
//gsoap ns1  service method-output-action:	getDatabaseInfo_ http://WebXml.com.cn/getDatabaseInfoResponse
int __ns1__getDatabaseInfo_(
    _ns1__getDatabaseInfo*              ns1__getDatabaseInfo,	///< Input parameter
    _ns1__getDatabaseInfoResponse      &ns1__getDatabaseInfoResponse	///< Output parameter
);

/** @page MobileCodeWSSoap Binding "MobileCodeWSSoap"

@section MobileCodeWSSoap_policy_enablers Policy Enablers of Binding "MobileCodeWSSoap"

None specified.

*/

/******************************************************************************\
 *                                                                            *
 * XML Data Binding                                                           *
 *                                                                            *
\******************************************************************************/


/** @page page_XMLDataBinding XML Data Binding

SOAP/XML services use data bindings that are contractually bound by WSDLs and
are auto-generated by wsdl2h and soapcpp2 (see Service Bindings). Plain data
bindings are adopted from XML schemas as part of the WSDL types section or when
running wsdl2h on a set of schemas to produce non-SOAP-based XML data bindings.

@note The following readers and writers are C/C++ data type (de)serializers
auto-generated by wsdl2h and soapcpp2. Run soapcpp2 on this file to generate the
(de)serialization code, which is stored in soapC.c[pp]. Include "soapH.h" in
your code to import these data type and function declarations. Only use the
soapcpp2-generated files in your project build. Do not include the wsdl2h-
generated .h file in your code.

@note Data can be read and deserialized from:
  - an int file descriptor, using soap->recvfd = fd
  - a socket, using soap->socket = (int)...
  - a C++ stream (istream, stringstream), using soap->is = (istream*)...
  - a C string, using soap->is = (const char*)...
  - any input, using the soap->frecv() callback

@note Data can be serialized and written to:
  - an int file descriptor, using soap->sendfd = (int)...
  - a socket, using soap->socket = (int)...
  - a C++ stream (ostream, stringstream), using soap->os = (ostream*)...
  - a C string, using soap->os = (const char**)...
  - any output, using the soap->fsend() callback

@note The following options are available for (de)serialization control:
  - soap->encodingStyle = NULL; to remove SOAP 1.1/1.2 encodingStyle
  - soap_set_mode(soap, SOAP_XML_TREE); XML without id-ref (no cycles!)
  - soap_set_mode(soap, SOAP_XML_GRAPH); XML with id-ref (including cycles)
  - soap_set_namespaces(soap, struct Namespace *nsmap); to set xmlns bindings


*/

/**

@section ns1 Top-level root elements of schema "http://WebXml.com.cn/"

  - <ns1:getMobileCodeInfo> @ref _ns1__getMobileCodeInfo
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__ns1__getMobileCodeInfo(struct soap*, _ns1__getMobileCodeInfo*);
    // Writer (returns SOAP_OK on success):
    soap_write__ns1__getMobileCodeInfo(struct soap*, _ns1__getMobileCodeInfo*);
    // REST GET (returns SOAP_OK on success):
    soap_GET__ns1__getMobileCodeInfo(struct soap*, const char *URL, _ns1__getMobileCodeInfo*);
    // REST PUT (returns SOAP_OK on success):
    soap_PUT__ns1__getMobileCodeInfo(struct soap*, const char *URL, _ns1__getMobileCodeInfo*);
    // REST POST (returns SOAP_OK on success):
    soap_POST_send__ns1__getMobileCodeInfo(struct soap*, const char *URL, _ns1__getMobileCodeInfo*);
    soap_POST_recv__ns1__getMobileCodeInfo(struct soap*, _ns1__getMobileCodeInfo*);
    @endcode

  - <ns1:getMobileCodeInfoResponse> @ref _ns1__getMobileCodeInfoResponse
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__ns1__getMobileCodeInfoResponse(struct soap*, _ns1__getMobileCodeInfoResponse*);
    // Writer (returns SOAP_OK on success):
    soap_write__ns1__getMobileCodeInfoResponse(struct soap*, _ns1__getMobileCodeInfoResponse*);
    // REST GET (returns SOAP_OK on success):
    soap_GET__ns1__getMobileCodeInfoResponse(struct soap*, const char *URL, _ns1__getMobileCodeInfoResponse*);
    // REST PUT (returns SOAP_OK on success):
    soap_PUT__ns1__getMobileCodeInfoResponse(struct soap*, const char *URL, _ns1__getMobileCodeInfoResponse*);
    // REST POST (returns SOAP_OK on success):
    soap_POST_send__ns1__getMobileCodeInfoResponse(struct soap*, const char *URL, _ns1__getMobileCodeInfoResponse*);
    soap_POST_recv__ns1__getMobileCodeInfoResponse(struct soap*, _ns1__getMobileCodeInfoResponse*);
    @endcode

  - <ns1:getDatabaseInfo> @ref _ns1__getDatabaseInfo
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__ns1__getDatabaseInfo(struct soap*, _ns1__getDatabaseInfo*);
    // Writer (returns SOAP_OK on success):
    soap_write__ns1__getDatabaseInfo(struct soap*, _ns1__getDatabaseInfo*);
    // REST GET (returns SOAP_OK on success):
    soap_GET__ns1__getDatabaseInfo(struct soap*, const char *URL, _ns1__getDatabaseInfo*);
    // REST PUT (returns SOAP_OK on success):
    soap_PUT__ns1__getDatabaseInfo(struct soap*, const char *URL, _ns1__getDatabaseInfo*);
    // REST POST (returns SOAP_OK on success):
    soap_POST_send__ns1__getDatabaseInfo(struct soap*, const char *URL, _ns1__getDatabaseInfo*);
    soap_POST_recv__ns1__getDatabaseInfo(struct soap*, _ns1__getDatabaseInfo*);
    @endcode

  - <ns1:getDatabaseInfoResponse> @ref _ns1__getDatabaseInfoResponse
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__ns1__getDatabaseInfoResponse(struct soap*, _ns1__getDatabaseInfoResponse*);
    // Writer (returns SOAP_OK on success):
    soap_write__ns1__getDatabaseInfoResponse(struct soap*, _ns1__getDatabaseInfoResponse*);
    // REST GET (returns SOAP_OK on success):
    soap_GET__ns1__getDatabaseInfoResponse(struct soap*, const char *URL, _ns1__getDatabaseInfoResponse*);
    // REST PUT (returns SOAP_OK on success):
    soap_PUT__ns1__getDatabaseInfoResponse(struct soap*, const char *URL, _ns1__getDatabaseInfoResponse*);
    // REST POST (returns SOAP_OK on success):
    soap_POST_send__ns1__getDatabaseInfoResponse(struct soap*, const char *URL, _ns1__getDatabaseInfoResponse*);
    soap_POST_recv__ns1__getDatabaseInfoResponse(struct soap*, _ns1__getDatabaseInfoResponse*);
    @endcode

  - <ns1:string> (use wsdl2h option -g to auto-generate type _ns1__string)

  - <ns1:ArrayOfString> (use wsdl2h option -g to auto-generate type _ns1__ArrayOfString)

*/

/* End of MobileCodeWS.h */