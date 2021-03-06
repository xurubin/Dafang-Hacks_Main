/* soapRemoteDiscoveryBindingService.cpp
   Generated by gSOAP 2.8.17r from /root/source/onvif/generated/onvif.h

Copyright(C) 2000-2013, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under one of the following licenses:
GPL or Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#include "soapRemoteDiscoveryBindingService.h"

RemoteDiscoveryBindingService::RemoteDiscoveryBindingService()
{	this->soap = soap_new();
	this->own = true;
	RemoteDiscoveryBindingService_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

RemoteDiscoveryBindingService::RemoteDiscoveryBindingService(struct soap *_soap)
{	this->soap = _soap;
	this->own = false;
	RemoteDiscoveryBindingService_init(_soap->imode, _soap->omode);
}

RemoteDiscoveryBindingService::RemoteDiscoveryBindingService(soap_mode iomode)
{	this->soap = soap_new();
	this->own = true;
	RemoteDiscoveryBindingService_init(iomode, iomode);
}

RemoteDiscoveryBindingService::RemoteDiscoveryBindingService(soap_mode imode, soap_mode omode)
{	this->soap = soap_new();
	this->own = true;
	RemoteDiscoveryBindingService_init(imode, omode);
}

RemoteDiscoveryBindingService::~RemoteDiscoveryBindingService()
{	if (this->own)
		soap_free(this->soap);
}

void RemoteDiscoveryBindingService::RemoteDiscoveryBindingService_init(soap_mode imode, soap_mode omode)
{	soap_imode(this->soap, imode);
	soap_omode(this->soap, omode);
	static const struct Namespace namespaces[] =
{
	{"SOAP-ENV", "http://schemas.xmlsoap.org/soap/envelope/", "http://www.w3.org/*/soap-envelope", NULL},
	{"SOAP-ENC", "http://schemas.xmlsoap.org/soap/encoding/", "http://www.w3.org/*/soap-encoding", NULL},
	{"xsi", "http://www.w3.org/2001/XMLSchema-instance", "http://www.w3.org/*/XMLSchema-instance", NULL},
	{"xsd", "http://www.w3.org/2001/XMLSchema", "http://www.w3.org/*/XMLSchema", NULL},
	{"wsa", "http://schemas.xmlsoap.org/ws/2004/08/addressing", NULL, NULL},
	{"wsdd", "http://schemas.xmlsoap.org/ws/2005/04/discovery", NULL, NULL},
	{"chan", "http://schemas.microsoft.com/ws/2005/02/duplex", NULL, NULL},
	{"wsa5", "http://www.w3.org/2005/08/addressing", "http://schemas.xmlsoap.org/ws/2004/08/addressing", NULL},
	{"ns1", "http://www.onvif.org/ver10/pacs", NULL, NULL},
	{"xmime", "http://tempuri.org/xmime.xsd", NULL, NULL},
	{"xop", "http://www.w3.org/2004/08/xop/include", NULL, NULL},
	{"tt", "http://www.onvif.org/ver10/schema", NULL, NULL},
	{"wsrfbf", "http://docs.oasis-open.org/wsrf/bf-2", NULL, NULL},
	{"wstop", "http://docs.oasis-open.org/wsn/t-1", NULL, NULL},
	{"wsrfr", "http://docs.oasis-open.org/wsrf/r-2", NULL, NULL},
	{"tdn", "http://www.onvif.org/ver10/network/wsdl", NULL, NULL},
	{"tds", "http://www.onvif.org/ver10/device/wsdl", NULL, NULL},
	{"tev", "http://www.onvif.org/ver10/events/wsdl", NULL, NULL},
	{"wsnt", "http://docs.oasis-open.org/wsn/b-2", NULL, NULL},
	{"timg", "http://www.onvif.org/ver20/imaging/wsdl", NULL, NULL},
	{"tmd", "http://www.onvif.org/ver10/deviceIO/wsdl", NULL, NULL},
	{"tptz", "http://www.onvif.org/ver20/ptz/wsdl", NULL, NULL},
	{"trt", "http://www.onvif.org/ver10/media/wsdl", NULL, NULL},
	{"trv", "http://www.onvif.org/ver10/receiver/wsdl", NULL, NULL},
	{"tse", "http://www.onvif.org/ver10/search/wsdl", NULL, NULL},
	{NULL, NULL, NULL, NULL}
};
	soap_set_namespaces(this->soap, namespaces);
}

void RemoteDiscoveryBindingService::destroy()
{	soap_destroy(this->soap);
	soap_end(this->soap);
}

void RemoteDiscoveryBindingService::reset()
{	destroy();
	soap_done(this->soap);
	soap_initialize(this->soap);
	RemoteDiscoveryBindingService_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

#ifndef WITH_PURE_VIRTUAL
RemoteDiscoveryBindingService *RemoteDiscoveryBindingService::copy()
{	RemoteDiscoveryBindingService *dup = SOAP_NEW_COPY(RemoteDiscoveryBindingService);
	if (dup)
		soap_copy_context(dup->soap, this->soap);
	return dup;
}
#endif

int RemoteDiscoveryBindingService::soap_close_socket()
{	return soap_closesock(this->soap);
}

int RemoteDiscoveryBindingService::soap_force_close_socket()
{	return soap_force_closesock(this->soap);
}

int RemoteDiscoveryBindingService::soap_senderfault(const char *string, const char *detailXML)
{	return ::soap_sender_fault(this->soap, string, detailXML);
}

int RemoteDiscoveryBindingService::soap_senderfault(const char *subcodeQName, const char *string, const char *detailXML)
{	return ::soap_sender_fault_subcode(this->soap, subcodeQName, string, detailXML);
}

int RemoteDiscoveryBindingService::soap_receiverfault(const char *string, const char *detailXML)
{	return ::soap_receiver_fault(this->soap, string, detailXML);
}

int RemoteDiscoveryBindingService::soap_receiverfault(const char *subcodeQName, const char *string, const char *detailXML)
{	return ::soap_receiver_fault_subcode(this->soap, subcodeQName, string, detailXML);
}

void RemoteDiscoveryBindingService::soap_print_fault(FILE *fd)
{	::soap_print_fault(this->soap, fd);
}

#ifndef WITH_LEAN
#ifndef WITH_COMPAT
void RemoteDiscoveryBindingService::soap_stream_fault(std::ostream& os)
{	::soap_stream_fault(this->soap, os);
}
#endif

char *RemoteDiscoveryBindingService::soap_sprint_fault(char *buf, size_t len)
{	return ::soap_sprint_fault(this->soap, buf, len);
}
#endif

void RemoteDiscoveryBindingService::soap_noheader()
{	this->soap->header = NULL;
}

void RemoteDiscoveryBindingService::soap_header(char *wsa__MessageID, struct wsa__Relationship *wsa__RelatesTo, struct wsa__EndpointReferenceType *wsa__From, struct wsa__EndpointReferenceType *wsa__ReplyTo, struct wsa__EndpointReferenceType *wsa__FaultTo, char *wsa__To, char *wsa__Action, struct wsdd__AppSequenceType *wsdd__AppSequence, char *wsa5__MessageID, struct wsa5__RelatesToType *wsa5__RelatesTo, struct wsa5__EndpointReferenceType *wsa5__From, struct wsa5__EndpointReferenceType *wsa5__ReplyTo, struct wsa5__EndpointReferenceType *wsa5__FaultTo, char *wsa5__To, char *wsa5__Action, struct chan__ChannelInstanceType *chan__ChannelInstance)
{	::soap_header(this->soap);
	this->soap->header->wsa__MessageID = wsa__MessageID;
	this->soap->header->wsa__RelatesTo = wsa__RelatesTo;
	this->soap->header->wsa__From = wsa__From;
	this->soap->header->wsa__ReplyTo = wsa__ReplyTo;
	this->soap->header->wsa__FaultTo = wsa__FaultTo;
	this->soap->header->wsa__To = wsa__To;
	this->soap->header->wsa__Action = wsa__Action;
	this->soap->header->wsdd__AppSequence = wsdd__AppSequence;
	this->soap->header->wsa5__MessageID = wsa5__MessageID;
	this->soap->header->wsa5__RelatesTo = wsa5__RelatesTo;
	this->soap->header->wsa5__From = wsa5__From;
	this->soap->header->wsa5__ReplyTo = wsa5__ReplyTo;
	this->soap->header->wsa5__FaultTo = wsa5__FaultTo;
	this->soap->header->wsa5__To = wsa5__To;
	this->soap->header->wsa5__Action = wsa5__Action;
	this->soap->header->chan__ChannelInstance = chan__ChannelInstance;
}

const SOAP_ENV__Header *RemoteDiscoveryBindingService::soap_header()
{	return this->soap->header;
}

int RemoteDiscoveryBindingService::run(int port)
{	if (soap_valid_socket(this->soap->master) || soap_valid_socket(bind(NULL, port, 100)))
	{	for (;;)
		{	if (!soap_valid_socket(accept()) || serve())
				return this->soap->error;
			soap_destroy(this->soap);
			soap_end(this->soap);
		}
	}
	else
		return this->soap->error;
	return SOAP_OK;
}

SOAP_SOCKET RemoteDiscoveryBindingService::bind(const char *host, int port, int backlog)
{	return soap_bind(this->soap, host, port, backlog);
}

SOAP_SOCKET RemoteDiscoveryBindingService::accept()
{	return soap_accept(this->soap);
}

#if defined(WITH_OPENSSL) || defined(WITH_GNUTLS)
int RemoteDiscoveryBindingService::ssl_accept()
{	return soap_ssl_accept(this->soap);
}
#endif

int RemoteDiscoveryBindingService::serve()
{
#ifndef WITH_FASTCGI
	unsigned int k = this->soap->max_keep_alive;
#endif
	do
	{

#ifndef WITH_FASTCGI
		if (this->soap->max_keep_alive > 0 && !--k)
			this->soap->keep_alive = 0;
#endif

		if (soap_begin_serve(this->soap))
		{	if (this->soap->error >= SOAP_STOP)
				continue;
			return this->soap->error;
		}
		if (dispatch() || (this->soap->fserveloop && this->soap->fserveloop(this->soap)))
		{
#ifdef WITH_FASTCGI
			soap_send_fault(this->soap);
#else
			return soap_send_fault(this->soap);
#endif
		}

#ifdef WITH_FASTCGI
		soap_destroy(this->soap);
		soap_end(this->soap);
	} while (1);
#else
	} while (this->soap->keep_alive);
#endif
	return SOAP_OK;
}

static int serve___tdn__Hello(RemoteDiscoveryBindingService*);
static int serve___tdn__Bye(RemoteDiscoveryBindingService*);
static int serve___tdn__Probe(RemoteDiscoveryBindingService*);

int RemoteDiscoveryBindingService::dispatch()
{	RemoteDiscoveryBindingService_init(this->soap->imode, this->soap->omode);
	soap_peek_element(this->soap);
	if (!soap_match_tag(this->soap, this->soap->tag, "tdn:Hello"))
		return serve___tdn__Hello(this);
	if (!soap_match_tag(this->soap, this->soap->tag, "tdn:Bye"))
		return serve___tdn__Bye(this);
	if (!soap_match_tag(this->soap, this->soap->tag, "tdn:Probe"))
		return serve___tdn__Probe(this);
	return this->soap->error = SOAP_NO_METHOD;
}

static int serve___tdn__Hello(RemoteDiscoveryBindingService *service)
{	struct soap *soap = service->soap;
	struct __tdn__Hello soap_tmp___tdn__Hello;
	struct wsdd__ResolveType tdn__HelloResponse;
	soap_default_wsdd__ResolveType(soap, &tdn__HelloResponse);
	soap_default___tdn__Hello(soap, &soap_tmp___tdn__Hello);
	if (!soap_get___tdn__Hello(soap, &soap_tmp___tdn__Hello, "-tdn:Hello", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->Hello(soap_tmp___tdn__Hello.tdn__Hello, tdn__HelloResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize_wsdd__ResolveType(soap, &tdn__HelloResponse);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put_wsdd__ResolveType(soap, &tdn__HelloResponse, "tdn:HelloResponse", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put_wsdd__ResolveType(soap, &tdn__HelloResponse, "tdn:HelloResponse", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___tdn__Bye(RemoteDiscoveryBindingService *service)
{	struct soap *soap = service->soap;
	struct __tdn__Bye soap_tmp___tdn__Bye;
	struct wsdd__ResolveType tdn__ByeResponse;
	soap_default_wsdd__ResolveType(soap, &tdn__ByeResponse);
	soap_default___tdn__Bye(soap, &soap_tmp___tdn__Bye);
	if (!soap_get___tdn__Bye(soap, &soap_tmp___tdn__Bye, "-tdn:Bye", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->Bye(soap_tmp___tdn__Bye.tdn__Bye, tdn__ByeResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize_wsdd__ResolveType(soap, &tdn__ByeResponse);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put_wsdd__ResolveType(soap, &tdn__ByeResponse, "tdn:ByeResponse", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put_wsdd__ResolveType(soap, &tdn__ByeResponse, "tdn:ByeResponse", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}

static int serve___tdn__Probe(RemoteDiscoveryBindingService *service)
{	struct soap *soap = service->soap;
	struct __tdn__Probe soap_tmp___tdn__Probe;
	struct wsdd__ProbeMatchesType tdn__ProbeResponse;
	soap_default_wsdd__ProbeMatchesType(soap, &tdn__ProbeResponse);
	soap_default___tdn__Probe(soap, &soap_tmp___tdn__Probe);
	if (!soap_get___tdn__Probe(soap, &soap_tmp___tdn__Probe, "-tdn:Probe", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->Probe(soap_tmp___tdn__Probe.tdn__Probe, tdn__ProbeResponse);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize_wsdd__ProbeMatchesType(soap, &tdn__ProbeResponse);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put_wsdd__ProbeMatchesType(soap, &tdn__ProbeResponse, "tdn:ProbeResponse", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put_wsdd__ProbeMatchesType(soap, &tdn__ProbeResponse, "tdn:ProbeResponse", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}
/* End of server object code */
