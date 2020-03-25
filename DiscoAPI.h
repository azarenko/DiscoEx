

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* at Mon Feb 04 11:42:44 2013
 */
/* Compiler settings for discoapi.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__


#ifndef __DiscoAPI_h__
#define __DiscoAPI_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ___IRCEvents_FWD_DEFINED__
#define ___IRCEvents_FWD_DEFINED__
typedef interface _IRCEvents _IRCEvents;
#endif 	/* ___IRCEvents_FWD_DEFINED__ */


#ifndef __IDevice_FWD_DEFINED__
#define __IDevice_FWD_DEFINED__
typedef interface IDevice IDevice;
#endif 	/* __IDevice_FWD_DEFINED__ */


#ifndef __IOscilloscope_FWD_DEFINED__
#define __IOscilloscope_FWD_DEFINED__
typedef interface IOscilloscope IOscilloscope;
#endif 	/* __IOscilloscope_FWD_DEFINED__ */


#ifndef __ILogicAnalyzer_FWD_DEFINED__
#define __ILogicAnalyzer_FWD_DEFINED__
typedef interface ILogicAnalyzer ILogicAnalyzer;
#endif 	/* __ILogicAnalyzer_FWD_DEFINED__ */


#ifndef __ISerialPort_FWD_DEFINED__
#define __ISerialPort_FWD_DEFINED__
typedef interface ISerialPort ISerialPort;
#endif 	/* __ISerialPort_FWD_DEFINED__ */


#ifndef __IScanMaster_FWD_DEFINED__
#define __IScanMaster_FWD_DEFINED__
typedef interface IScanMaster IScanMaster;
#endif 	/* __IScanMaster_FWD_DEFINED__ */


#ifndef __ISerial_FWD_DEFINED__
#define __ISerial_FWD_DEFINED__
typedef interface ISerial ISerial;
#endif 	/* __ISerial_FWD_DEFINED__ */


#ifndef __ISynchronizer_FWD_DEFINED__
#define __ISynchronizer_FWD_DEFINED__
typedef interface ISynchronizer ISynchronizer;
#endif 	/* __ISynchronizer_FWD_DEFINED__ */


#ifndef __ILoader_FWD_DEFINED__
#define __ILoader_FWD_DEFINED__
typedef interface ILoader ILoader;
#endif 	/* __ILoader_FWD_DEFINED__ */


#ifndef __IMultiscope_FWD_DEFINED__
#define __IMultiscope_FWD_DEFINED__
typedef interface IMultiscope IMultiscope;
#endif 	/* __IMultiscope_FWD_DEFINED__ */


#ifndef __IMMKey_FWD_DEFINED__
#define __IMMKey_FWD_DEFINED__
typedef interface IMMKey IMMKey;
#endif 	/* __IMMKey_FWD_DEFINED__ */


#ifndef __IBusControl_FWD_DEFINED__
#define __IBusControl_FWD_DEFINED__
typedef interface IBusControl IBusControl;
#endif 	/* __IBusControl_FWD_DEFINED__ */


#ifndef __IIRReceiver_FWD_DEFINED__
#define __IIRReceiver_FWD_DEFINED__
typedef interface IIRReceiver IIRReceiver;
#endif 	/* __IIRReceiver_FWD_DEFINED__ */


#ifndef __CoDiscoAPI_FWD_DEFINED__
#define __CoDiscoAPI_FWD_DEFINED__

#ifdef __cplusplus
typedef class CoDiscoAPI CoDiscoAPI;
#else
typedef struct CoDiscoAPI CoDiscoAPI;
#endif /* __cplusplus */

#endif 	/* __CoDiscoAPI_FWD_DEFINED__ */


#ifndef __CoDiscoSynchronizerAPI_FWD_DEFINED__
#define __CoDiscoSynchronizerAPI_FWD_DEFINED__

#ifdef __cplusplus
typedef class CoDiscoSynchronizerAPI CoDiscoSynchronizerAPI;
#else
typedef struct CoDiscoSynchronizerAPI CoDiscoSynchronizerAPI;
#endif /* __cplusplus */

#endif 	/* __CoDiscoSynchronizerAPI_FWD_DEFINED__ */


#ifndef __CoDiscoLoaderAPI_FWD_DEFINED__
#define __CoDiscoLoaderAPI_FWD_DEFINED__

#ifdef __cplusplus
typedef class CoDiscoLoaderAPI CoDiscoLoaderAPI;
#else
typedef struct CoDiscoLoaderAPI CoDiscoLoaderAPI;
#endif /* __cplusplus */

#endif 	/* __CoDiscoLoaderAPI_FWD_DEFINED__ */


#ifndef __Multiscope_FWD_DEFINED__
#define __Multiscope_FWD_DEFINED__

#ifdef __cplusplus
typedef class Multiscope Multiscope;
#else
typedef struct Multiscope Multiscope;
#endif /* __cplusplus */

#endif 	/* __Multiscope_FWD_DEFINED__ */


#ifndef __CoMMKey_FWD_DEFINED__
#define __CoMMKey_FWD_DEFINED__

#ifdef __cplusplus
typedef class CoMMKey CoMMKey;
#else
typedef struct CoMMKey CoMMKey;
#endif /* __cplusplus */

#endif 	/* __CoMMKey_FWD_DEFINED__ */


#ifndef __CoBusControl_FWD_DEFINED__
#define __CoBusControl_FWD_DEFINED__

#ifdef __cplusplus
typedef class CoBusControl CoBusControl;
#else
typedef struct CoBusControl CoBusControl;
#endif /* __cplusplus */

#endif 	/* __CoBusControl_FWD_DEFINED__ */


#ifndef __CoIRReceiver_FWD_DEFINED__
#define __CoIRReceiver_FWD_DEFINED__

#ifdef __cplusplus
typedef class CoIRReceiver CoIRReceiver;
#else
typedef struct CoIRReceiver CoIRReceiver;
#endif /* __cplusplus */

#endif 	/* __CoIRReceiver_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 


#ifndef __DiscoAPILib_LIBRARY_DEFINED__
#define __DiscoAPILib_LIBRARY_DEFINED__

/* library DiscoAPILib */
/* [helpstring][version][uuid] */ 














typedef /* [public][public][public][public] */ 
enum __MIDL___MIDL_itf_discoapi_0115_0001
    {	NormalAutoUpdate	= 0,
	DisableAutoUpdate	= 1,
	MandatoryUpdate	= 2
    } 	DeviceUpdateMode;

typedef /* [public][public][public][public] */ 
enum __MIDL___MIDL_itf_discoapi_0115_0002
    {	DeviceOpenModeAttachOrOpen	= 0,
	DeviceOpenModeAttach	= 1,
	DeviceOpenModeOpen	= 2
    } 	DeviceOpenMode;

typedef /* [public][public][public][public][public][public][public][public][public][public][public][public][public][public][public][public][public][public] */ 
enum __MIDL___MIDL_itf_discoapi_0116_0001
    {	A	= 0,
	B	= 1,
	Sync	= 2
    } 	Channel;

typedef /* [public][public][public] */ 
enum __MIDL___MIDL_itf_discoapi_0116_0002
    {	Never	= 0,
	Immediate	= 1,
	AbsoluteRisingEdge	= 2,
	AbsoluteFallingEdge	= 3,
	DifferentialRisingEdge	= 4,
	DifferentialFallingEdge	= 5,
	AbsoluteRisingSigma	= 6,
	AbsoluteFallingSigma	= 7,
	AbsoluteBothSigma	= 8,
	BusARisingEdge	= 9,
	BusAFallingEdge	= 10
    } 	OscTriggerType;

typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_discoapi_0116_0003
    {	Off	= 0,
	On	= 1
    } 	OnOff;

typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_discoapi_0116_0004
    {	Buff	= 0,
	Pipe	= 1
    } 	PipeMode;

typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_discoapi_0116_0005
    {	Falling	= 0,
	Rising	= 1
    } 	TriggerEdge;

typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_discoapi_0116_0006
    {	ChannelA	= 0,
	ChannelB	= 1,
	External	= 2
    } 	TriggerSource;

typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_discoapi_0116_0007
    {	Absolute	= 0,
	Differential	= 1
    } 	TriggerType;

typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_discoapi_0116_0008
    {	HzX10	= 0,
	HzX1	= 1
    } 	TimerMultiplier;

typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_discoapi_0116_0009
    {	StatAvg	= 0,
	StatSigma	= 1,
	StatMin	= 2,
	StatMax	= 3,
	StatNoiseAvg	= 4,
	StatNoiseSigma	= 5,
	StatNoiseMin	= 6,
	StatNoiseMax	= 7
    } 	StatParam;

typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_discoapi_0116_0010
    {	Dec1to8	= 0,
	Dec1to4	= 1,
	Dec1to2	= 2,
	Dec1to1	= 3,
	Dec2to1	= 4,
	Dec4to1	= 5,
	Dec8to1	= 6
    } 	Decimation;

typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_discoapi_0117_0001
    {	Buff8M	= 0,
	Buff6M	= 1,
	Buff4M	= 2,
	Buff3M	= 3,
	Buff2M	= 4,
	Buff1M	= 5,
	LanPipe	= 6
    } 	LanReadingMode;

typedef /* [public][public][public] */ 
enum __MIDL___MIDL_itf_discoapi_0118_0001
    {	NoneParity	= 0,
	Even	= 1,
	Odd	= 2,
	mark	= 3,
	Space	= 4
    } 	SerialPortParity;

typedef /* [public][public][public] */ 
enum __MIDL___MIDL_itf_discoapi_0118_0002
    {	NoneOptions	= 0,
	Receive9thBit	= 1
    } 	SerialPortOptions;

typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_discoapi_0118_0003
    {	Normal	= 0,
	FastIni	= 1
    } 	SerialPortPacketType;


EXTERN_C const IID LIBID_DiscoAPILib;

#ifndef ___IRCEvents_DISPINTERFACE_DEFINED__
#define ___IRCEvents_DISPINTERFACE_DEFINED__

/* dispinterface _IRCEvents */
/* [uuid] */ 


EXTERN_C const IID DIID__IRCEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("D83210DC-A10C-4F9C-96FD-8BDA6A528217")
    _IRCEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _IRCEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _IRCEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _IRCEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _IRCEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _IRCEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _IRCEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _IRCEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _IRCEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _IRCEventsVtbl;

    interface _IRCEvents
    {
        CONST_VTBL struct _IRCEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _IRCEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define _IRCEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define _IRCEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define _IRCEvents_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define _IRCEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define _IRCEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define _IRCEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___IRCEvents_DISPINTERFACE_DEFINED__ */


#ifndef __IDevice_INTERFACE_DEFINED__
#define __IDevice_INTERFACE_DEFINED__

/* interface IDevice */
/* [object][helpstring][uuid] */ 


EXTERN_C const IID IID_IDevice;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("358BCFF4-85B8-4199-A7A1-63450E64A978")
    IDevice : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT __stdcall Init( 
            /* [in] */ int initParam,
            /* [in] */ DeviceUpdateMode updateMode,
            /* [retval][out] */ VARIANT_BOOL *funcResult) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall Uninit( void) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall IsDeviceConnected( 
            /* [retval][out] */ VARIANT_BOOL *funcResult) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall GetFirmwareVersion( 
            /* [retval][out] */ BSTR *ver) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall ResetDevice( void) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall Transfer( 
            unsigned long pipeNum,
            unsigned long read,
            unsigned long options,
            unsigned char *buffer,
            unsigned long bufferSize,
            unsigned long *bytesTransferred,
            unsigned char *setupPacket,
            unsigned long timeOut,
            /* [retval][out] */ unsigned long *error) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall Status( 
            /* [in] */ int param,
            /* [retval][out] */ int *ret) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall GetLinkName( 
            /* [retval][out] */ BSTR *linkName) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall Serial( 
            /* [retval][out] */ BSTR *Serial) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall GetDeviceGUID( 
            /* [retval][out] */ BSTR *guidStr) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall EnableLog( 
            /* [in] */ VARIANT_BOOL enable,
            /* [retval][out] */ VARIANT_BOOL *funcResult) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall ExportLog( 
            /* [retval][out] */ VARIANT_BOOL *funcResult) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall InitEx( 
            /* [in] */ BSTR *deviceSerial,
            /* [in] */ BSTR *deviceGUID,
            /* [in] */ DeviceOpenMode openMode,
            /* [in] */ DeviceUpdateMode updateMode,
            /* [retval][out] */ VARIANT_BOOL *funcResult) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall UploadFirmware( 
            /* [in] */ BSTR *firmwarePath,
            /* [retval][out] */ VARIANT_BOOL *funcResult) = 0;
        
        virtual HRESULT __stdcall Exchange( 
            /* [in] */ unsigned char bRequest,
            /* [in] */ unsigned short wValue,
            /* [in] */ unsigned short wIndex,
            /* [in] */ unsigned char *sendData,
            /* [in] */ unsigned short sendDataLength,
            /* [in] */ unsigned char *receiveData,
            /* [in] */ unsigned short receiveDataMaxLength,
            /* [in] */ unsigned long receiveTimeout,
            /* [retval][out] */ unsigned short *receivedLength) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDeviceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDevice * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDevice * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDevice * This);
        
        /* [helpstring] */ HRESULT ( __stdcall *Init )( 
            IDevice * This,
            /* [in] */ int initParam,
            /* [in] */ DeviceUpdateMode updateMode,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *Uninit )( 
            IDevice * This);
        
        /* [helpstring] */ HRESULT ( __stdcall *IsDeviceConnected )( 
            IDevice * This,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *GetFirmwareVersion )( 
            IDevice * This,
            /* [retval][out] */ BSTR *ver);
        
        /* [helpstring] */ HRESULT ( __stdcall *ResetDevice )( 
            IDevice * This);
        
        /* [helpstring] */ HRESULT ( __stdcall *Transfer )( 
            IDevice * This,
            unsigned long pipeNum,
            unsigned long read,
            unsigned long options,
            unsigned char *buffer,
            unsigned long bufferSize,
            unsigned long *bytesTransferred,
            unsigned char *setupPacket,
            unsigned long timeOut,
            /* [retval][out] */ unsigned long *error);
        
        /* [helpstring] */ HRESULT ( __stdcall *Status )( 
            IDevice * This,
            /* [in] */ int param,
            /* [retval][out] */ int *ret);
        
        /* [helpstring] */ HRESULT ( __stdcall *GetLinkName )( 
            IDevice * This,
            /* [retval][out] */ BSTR *linkName);
        
        /* [helpstring] */ HRESULT ( __stdcall *Serial )( 
            IDevice * This,
            /* [retval][out] */ BSTR *Serial);
        
        /* [helpstring] */ HRESULT ( __stdcall *GetDeviceGUID )( 
            IDevice * This,
            /* [retval][out] */ BSTR *guidStr);
        
        /* [helpstring] */ HRESULT ( __stdcall *EnableLog )( 
            IDevice * This,
            /* [in] */ VARIANT_BOOL enable,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *ExportLog )( 
            IDevice * This,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *InitEx )( 
            IDevice * This,
            /* [in] */ BSTR *deviceSerial,
            /* [in] */ BSTR *deviceGUID,
            /* [in] */ DeviceOpenMode openMode,
            /* [in] */ DeviceUpdateMode updateMode,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *UploadFirmware )( 
            IDevice * This,
            /* [in] */ BSTR *firmwarePath,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        HRESULT ( __stdcall *Exchange )( 
            IDevice * This,
            /* [in] */ unsigned char bRequest,
            /* [in] */ unsigned short wValue,
            /* [in] */ unsigned short wIndex,
            /* [in] */ unsigned char *sendData,
            /* [in] */ unsigned short sendDataLength,
            /* [in] */ unsigned char *receiveData,
            /* [in] */ unsigned short receiveDataMaxLength,
            /* [in] */ unsigned long receiveTimeout,
            /* [retval][out] */ unsigned short *receivedLength);
        
        END_INTERFACE
    } IDeviceVtbl;

    interface IDevice
    {
        CONST_VTBL struct IDeviceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDevice_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDevice_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDevice_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDevice_Init(This,initParam,updateMode,funcResult)	\
    (This)->lpVtbl -> Init(This,initParam,updateMode,funcResult)

#define IDevice_Uninit(This)	\
    (This)->lpVtbl -> Uninit(This)

#define IDevice_IsDeviceConnected(This,funcResult)	\
    (This)->lpVtbl -> IsDeviceConnected(This,funcResult)

#define IDevice_GetFirmwareVersion(This,ver)	\
    (This)->lpVtbl -> GetFirmwareVersion(This,ver)

#define IDevice_ResetDevice(This)	\
    (This)->lpVtbl -> ResetDevice(This)

#define IDevice_Transfer(This,pipeNum,read,options,buffer,bufferSize,bytesTransferred,setupPacket,timeOut,error)	\
    (This)->lpVtbl -> Transfer(This,pipeNum,read,options,buffer,bufferSize,bytesTransferred,setupPacket,timeOut,error)

#define IDevice_Status(This,param,ret)	\
    (This)->lpVtbl -> Status(This,param,ret)

#define IDevice_GetLinkName(This,linkName)	\
    (This)->lpVtbl -> GetLinkName(This,linkName)

#define IDevice_Serial(This,Serial)	\
    (This)->lpVtbl -> Serial(This,Serial)

#define IDevice_GetDeviceGUID(This,guidStr)	\
    (This)->lpVtbl -> GetDeviceGUID(This,guidStr)

#define IDevice_EnableLog(This,enable,funcResult)	\
    (This)->lpVtbl -> EnableLog(This,enable,funcResult)

#define IDevice_ExportLog(This,funcResult)	\
    (This)->lpVtbl -> ExportLog(This,funcResult)

#define IDevice_InitEx(This,deviceSerial,deviceGUID,openMode,updateMode,funcResult)	\
    (This)->lpVtbl -> InitEx(This,deviceSerial,deviceGUID,openMode,updateMode,funcResult)

#define IDevice_UploadFirmware(This,firmwarePath,funcResult)	\
    (This)->lpVtbl -> UploadFirmware(This,firmwarePath,funcResult)

#define IDevice_Exchange(This,bRequest,wValue,wIndex,sendData,sendDataLength,receiveData,receiveDataMaxLength,receiveTimeout,receivedLength)	\
    (This)->lpVtbl -> Exchange(This,bRequest,wValue,wIndex,sendData,sendDataLength,receiveData,receiveDataMaxLength,receiveTimeout,receivedLength)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT __stdcall IDevice_Init_Proxy( 
    IDevice * This,
    /* [in] */ int initParam,
    /* [in] */ DeviceUpdateMode updateMode,
    /* [retval][out] */ VARIANT_BOOL *funcResult);


void __RPC_STUB IDevice_Init_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall IDevice_Uninit_Proxy( 
    IDevice * This);


void __RPC_STUB IDevice_Uninit_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall IDevice_IsDeviceConnected_Proxy( 
    IDevice * This,
    /* [retval][out] */ VARIANT_BOOL *funcResult);


void __RPC_STUB IDevice_IsDeviceConnected_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall IDevice_GetFirmwareVersion_Proxy( 
    IDevice * This,
    /* [retval][out] */ BSTR *ver);


void __RPC_STUB IDevice_GetFirmwareVersion_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall IDevice_ResetDevice_Proxy( 
    IDevice * This);


void __RPC_STUB IDevice_ResetDevice_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall IDevice_Transfer_Proxy( 
    IDevice * This,
    unsigned long pipeNum,
    unsigned long read,
    unsigned long options,
    unsigned char *buffer,
    unsigned long bufferSize,
    unsigned long *bytesTransferred,
    unsigned char *setupPacket,
    unsigned long timeOut,
    /* [retval][out] */ unsigned long *error);


void __RPC_STUB IDevice_Transfer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall IDevice_Status_Proxy( 
    IDevice * This,
    /* [in] */ int param,
    /* [retval][out] */ int *ret);


void __RPC_STUB IDevice_Status_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall IDevice_GetLinkName_Proxy( 
    IDevice * This,
    /* [retval][out] */ BSTR *linkName);


void __RPC_STUB IDevice_GetLinkName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall IDevice_Serial_Proxy( 
    IDevice * This,
    /* [retval][out] */ BSTR *Serial);


void __RPC_STUB IDevice_Serial_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall IDevice_GetDeviceGUID_Proxy( 
    IDevice * This,
    /* [retval][out] */ BSTR *guidStr);


void __RPC_STUB IDevice_GetDeviceGUID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall IDevice_EnableLog_Proxy( 
    IDevice * This,
    /* [in] */ VARIANT_BOOL enable,
    /* [retval][out] */ VARIANT_BOOL *funcResult);


void __RPC_STUB IDevice_EnableLog_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall IDevice_ExportLog_Proxy( 
    IDevice * This,
    /* [retval][out] */ VARIANT_BOOL *funcResult);


void __RPC_STUB IDevice_ExportLog_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall IDevice_InitEx_Proxy( 
    IDevice * This,
    /* [in] */ BSTR *deviceSerial,
    /* [in] */ BSTR *deviceGUID,
    /* [in] */ DeviceOpenMode openMode,
    /* [in] */ DeviceUpdateMode updateMode,
    /* [retval][out] */ VARIANT_BOOL *funcResult);


void __RPC_STUB IDevice_InitEx_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall IDevice_UploadFirmware_Proxy( 
    IDevice * This,
    /* [in] */ BSTR *firmwarePath,
    /* [retval][out] */ VARIANT_BOOL *funcResult);


void __RPC_STUB IDevice_UploadFirmware_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT __stdcall IDevice_Exchange_Proxy( 
    IDevice * This,
    /* [in] */ unsigned char bRequest,
    /* [in] */ unsigned short wValue,
    /* [in] */ unsigned short wIndex,
    /* [in] */ unsigned char *sendData,
    /* [in] */ unsigned short sendDataLength,
    /* [in] */ unsigned char *receiveData,
    /* [in] */ unsigned short receiveDataMaxLength,
    /* [in] */ unsigned long receiveTimeout,
    /* [retval][out] */ unsigned short *receivedLength);


void __RPC_STUB IDevice_Exchange_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDevice_INTERFACE_DEFINED__ */


#ifndef __IOscilloscope_INTERFACE_DEFINED__
#define __IOscilloscope_INTERFACE_DEFINED__

/* interface IOscilloscope */
/* [object][helpstring][uuid] */ 


EXTERN_C const IID IID_IOscilloscope;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CB06683A-8E13-4DC2-B2D5-B00C893684AE")
    IOscilloscope : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT __stdcall GetSynchroGUID( 
            /* [retval][out] */ BSTR *synchroGUID) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall SetSynchroGUID( 
            /* [in] */ BSTR *synchroGUID,
            /* [retval][out] */ VARIANT_BOOL *funcResult) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall ClearSynchroEvent( void) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall SetStreamingPause( void) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall ClearStreamingPause( void) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall SetStreamDataPartSize( 
            /* [in] */ int dataPartSize,
            /* [retval][out] */ VARIANT_BOOL *funcResult) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall SetStreamingBuffersOptions( 
            /* [in] */ int preBufferSize,
            /* [in] */ int synchroBufferSize) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall SetStreamingDataOptions( 
            /* [in] */ VARIANT_BOOL waitForFullPreBuffer) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall StartStreamingData( void) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall RestartStreaming( void) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall StopStreaming( void) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall IsSynchro( 
            /* [retval][out] */ VARIANT_BOOL *funcResult) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall IsDataReady( 
            /* [retval][out] */ VARIANT_BOOL *ready) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall GetSynchroIndexes( 
            /* [out] */ long *preBufferStartIndex,
            /* [out] */ long *synchroIndex,
            /* [retval][out] */ VARIANT_BOOL *funcResult) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall GetSampleCount( 
            /* [retval][out] */ int *count) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall GetChannelData( 
            /* [out][in] */ SAFEARRAY * buffer,
            /* [out][in] */ int *bufferSize,
            Channel Channel) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall GetChannelSample( 
            int index,
            Channel Channel,
            /* [retval][out] */ double *data) = 0;
        
        virtual HRESULT __stdcall GetChannelDataArray( 
            /* [in] */ Channel Channel,
            /* [out] */ double *buffer,
            /* [in] */ long from,
            /* [in] */ int bufferLength,
            /* [retval][out] */ int *funcResult) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall SetChannelDataArray( 
            /* [in] */ Channel Channel,
            /* [in] */ double *buffer,
            /* [in] */ long from,
            /* [in] */ int bufferLength,
            /* [retval][out] */ int *funcResult) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall GetVoltage( 
            Channel Channel,
            /* [retval][out] */ double *data) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall SetImmediateTriggerMode( void) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall SetDependedTriggerMode( void) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall SetTrigger( 
            /* [in] */ Channel Channel,
            /* [in] */ OscTriggerType trigger,
            /* [in] */ double triggerValue,
            /* [retval][out] */ VARIANT_BOOL *funcResult) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall SetChannelOnOff( 
            /* [in] */ Channel Channel,
            /* [in] */ OnOff OnOff) = 0;
        
        virtual HRESULT __stdcall SetPipeMode( 
            /* [in] */ PipeMode mode) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall SetPipeBufferSize( 
            /* [in] */ int size) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall UseTrigger( 
            /* [in] */ VARIANT_BOOL UseTrigger) = 0;
        
        virtual HRESULT __stdcall SetTriggerEdge( 
            /* [in] */ TriggerEdge edge) = 0;
        
        virtual HRESULT __stdcall SetTriggerSource( 
            /* [in] */ TriggerSource src) = 0;
        
        virtual HRESULT __stdcall SetTriggerType( 
            /* [in] */ TriggerType type) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall SetTriggerLevel( 
            /* [in] */ Channel Channel,
            /* [in] */ double level) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall SetDiffTriggerLevel( 
            /* [in] */ double level) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall UseExtrenalClock( 
            /* [in] */ VARIANT_BOOL extClock) = 0;
        
        virtual HRESULT __stdcall SetTimerMultiplier( 
            /* [in] */ TimerMultiplier multiplier) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall SetTimeBase( 
            /* [in] */ double timeBase) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall SetSamplingFrequency( 
            /* [in] */ double samplingFrequency) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall SetChannelMaxGain( 
            /* [in] */ Channel Channel,
            /* [in] */ double voltage) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall GetSyncMark( 
            /* [in] */ Channel Channel,
            /* [in] */ long MarkIndex,
            /* [out] */ long *mark) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall SetSyncMark( 
            /* [in] */ Channel Channel,
            /* [in] */ long MarkIndex,
            /* [in] */ long mark) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall GetMarkCount( 
            /* [in] */ Channel Channel,
            /* [out] */ long *markCount) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall GetChannelStatParam( 
            /* [in] */ StatParam StatParam,
            /* [in] */ Channel Channel,
            /* [retval][out] */ double *value) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall SetChannelSyncSkip( 
            /* [in] */ Channel Channel,
            /* [in] */ int syncSkip) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall SetDecimation( 
            /* [in] */ Decimation Decimation) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall ReSync( void) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall ClearData( void) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall SetChannelClosed( 
            /* [in] */ Channel Channel,
            /* [in] */ VARIANT_BOOL closed) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IOscilloscopeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IOscilloscope * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IOscilloscope * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IOscilloscope * This);
        
        /* [helpstring] */ HRESULT ( __stdcall *GetSynchroGUID )( 
            IOscilloscope * This,
            /* [retval][out] */ BSTR *synchroGUID);
        
        /* [helpstring] */ HRESULT ( __stdcall *SetSynchroGUID )( 
            IOscilloscope * This,
            /* [in] */ BSTR *synchroGUID,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *ClearSynchroEvent )( 
            IOscilloscope * This);
        
        /* [helpstring] */ HRESULT ( __stdcall *SetStreamingPause )( 
            IOscilloscope * This);
        
        /* [helpstring] */ HRESULT ( __stdcall *ClearStreamingPause )( 
            IOscilloscope * This);
        
        /* [helpstring] */ HRESULT ( __stdcall *SetStreamDataPartSize )( 
            IOscilloscope * This,
            /* [in] */ int dataPartSize,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *SetStreamingBuffersOptions )( 
            IOscilloscope * This,
            /* [in] */ int preBufferSize,
            /* [in] */ int synchroBufferSize);
        
        /* [helpstring] */ HRESULT ( __stdcall *SetStreamingDataOptions )( 
            IOscilloscope * This,
            /* [in] */ VARIANT_BOOL waitForFullPreBuffer);
        
        /* [helpstring] */ HRESULT ( __stdcall *StartStreamingData )( 
            IOscilloscope * This);
        
        /* [helpstring] */ HRESULT ( __stdcall *RestartStreaming )( 
            IOscilloscope * This);
        
        /* [helpstring] */ HRESULT ( __stdcall *StopStreaming )( 
            IOscilloscope * This);
        
        /* [helpstring] */ HRESULT ( __stdcall *IsSynchro )( 
            IOscilloscope * This,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *IsDataReady )( 
            IOscilloscope * This,
            /* [retval][out] */ VARIANT_BOOL *ready);
        
        /* [helpstring] */ HRESULT ( __stdcall *GetSynchroIndexes )( 
            IOscilloscope * This,
            /* [out] */ long *preBufferStartIndex,
            /* [out] */ long *synchroIndex,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *GetSampleCount )( 
            IOscilloscope * This,
            /* [retval][out] */ int *count);
        
        /* [helpstring] */ HRESULT ( __stdcall *GetChannelData )( 
            IOscilloscope * This,
            /* [out][in] */ SAFEARRAY * buffer,
            /* [out][in] */ int *bufferSize,
            Channel Channel);
        
        /* [helpstring] */ HRESULT ( __stdcall *GetChannelSample )( 
            IOscilloscope * This,
            int index,
            Channel Channel,
            /* [retval][out] */ double *data);
        
        HRESULT ( __stdcall *GetChannelDataArray )( 
            IOscilloscope * This,
            /* [in] */ Channel Channel,
            /* [out] */ double *buffer,
            /* [in] */ long from,
            /* [in] */ int bufferLength,
            /* [retval][out] */ int *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *SetChannelDataArray )( 
            IOscilloscope * This,
            /* [in] */ Channel Channel,
            /* [in] */ double *buffer,
            /* [in] */ long from,
            /* [in] */ int bufferLength,
            /* [retval][out] */ int *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *GetVoltage )( 
            IOscilloscope * This,
            Channel Channel,
            /* [retval][out] */ double *data);
        
        /* [helpstring] */ HRESULT ( __stdcall *SetImmediateTriggerMode )( 
            IOscilloscope * This);
        
        /* [helpstring] */ HRESULT ( __stdcall *SetDependedTriggerMode )( 
            IOscilloscope * This);
        
        /* [helpstring] */ HRESULT ( __stdcall *SetTrigger )( 
            IOscilloscope * This,
            /* [in] */ Channel Channel,
            /* [in] */ OscTriggerType trigger,
            /* [in] */ double triggerValue,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *SetChannelOnOff )( 
            IOscilloscope * This,
            /* [in] */ Channel Channel,
            /* [in] */ OnOff OnOff);
        
        HRESULT ( __stdcall *SetPipeMode )( 
            IOscilloscope * This,
            /* [in] */ PipeMode mode);
        
        /* [helpstring] */ HRESULT ( __stdcall *SetPipeBufferSize )( 
            IOscilloscope * This,
            /* [in] */ int size);
        
        /* [helpstring] */ HRESULT ( __stdcall *UseTrigger )( 
            IOscilloscope * This,
            /* [in] */ VARIANT_BOOL UseTrigger);
        
        HRESULT ( __stdcall *SetTriggerEdge )( 
            IOscilloscope * This,
            /* [in] */ TriggerEdge edge);
        
        HRESULT ( __stdcall *SetTriggerSource )( 
            IOscilloscope * This,
            /* [in] */ TriggerSource src);
        
        HRESULT ( __stdcall *SetTriggerType )( 
            IOscilloscope * This,
            /* [in] */ TriggerType type);
        
        /* [helpstring] */ HRESULT ( __stdcall *SetTriggerLevel )( 
            IOscilloscope * This,
            /* [in] */ Channel Channel,
            /* [in] */ double level);
        
        /* [helpstring] */ HRESULT ( __stdcall *SetDiffTriggerLevel )( 
            IOscilloscope * This,
            /* [in] */ double level);
        
        /* [helpstring] */ HRESULT ( __stdcall *UseExtrenalClock )( 
            IOscilloscope * This,
            /* [in] */ VARIANT_BOOL extClock);
        
        HRESULT ( __stdcall *SetTimerMultiplier )( 
            IOscilloscope * This,
            /* [in] */ TimerMultiplier multiplier);
        
        /* [helpstring] */ HRESULT ( __stdcall *SetTimeBase )( 
            IOscilloscope * This,
            /* [in] */ double timeBase);
        
        /* [helpstring] */ HRESULT ( __stdcall *SetSamplingFrequency )( 
            IOscilloscope * This,
            /* [in] */ double samplingFrequency);
        
        /* [helpstring] */ HRESULT ( __stdcall *SetChannelMaxGain )( 
            IOscilloscope * This,
            /* [in] */ Channel Channel,
            /* [in] */ double voltage);
        
        /* [helpstring] */ HRESULT ( __stdcall *GetSyncMark )( 
            IOscilloscope * This,
            /* [in] */ Channel Channel,
            /* [in] */ long MarkIndex,
            /* [out] */ long *mark);
        
        /* [helpstring] */ HRESULT ( __stdcall *SetSyncMark )( 
            IOscilloscope * This,
            /* [in] */ Channel Channel,
            /* [in] */ long MarkIndex,
            /* [in] */ long mark);
        
        /* [helpstring] */ HRESULT ( __stdcall *GetMarkCount )( 
            IOscilloscope * This,
            /* [in] */ Channel Channel,
            /* [out] */ long *markCount);
        
        /* [helpstring] */ HRESULT ( __stdcall *GetChannelStatParam )( 
            IOscilloscope * This,
            /* [in] */ StatParam StatParam,
            /* [in] */ Channel Channel,
            /* [retval][out] */ double *value);
        
        /* [helpstring] */ HRESULT ( __stdcall *SetChannelSyncSkip )( 
            IOscilloscope * This,
            /* [in] */ Channel Channel,
            /* [in] */ int syncSkip);
        
        /* [helpstring] */ HRESULT ( __stdcall *SetDecimation )( 
            IOscilloscope * This,
            /* [in] */ Decimation Decimation);
        
        /* [helpstring] */ HRESULT ( __stdcall *ReSync )( 
            IOscilloscope * This);
        
        /* [helpstring] */ HRESULT ( __stdcall *ClearData )( 
            IOscilloscope * This);
        
        /* [helpstring] */ HRESULT ( __stdcall *SetChannelClosed )( 
            IOscilloscope * This,
            /* [in] */ Channel Channel,
            /* [in] */ VARIANT_BOOL closed);
        
        END_INTERFACE
    } IOscilloscopeVtbl;

    interface IOscilloscope
    {
        CONST_VTBL struct IOscilloscopeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOscilloscope_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IOscilloscope_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IOscilloscope_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IOscilloscope_GetSynchroGUID(This,synchroGUID)	\
    (This)->lpVtbl -> GetSynchroGUID(This,synchroGUID)

#define IOscilloscope_SetSynchroGUID(This,synchroGUID,funcResult)	\
    (This)->lpVtbl -> SetSynchroGUID(This,synchroGUID,funcResult)

#define IOscilloscope_ClearSynchroEvent(This)	\
    (This)->lpVtbl -> ClearSynchroEvent(This)

#define IOscilloscope_SetStreamingPause(This)	\
    (This)->lpVtbl -> SetStreamingPause(This)

#define IOscilloscope_ClearStreamingPause(This)	\
    (This)->lpVtbl -> ClearStreamingPause(This)

#define IOscilloscope_SetStreamDataPartSize(This,dataPartSize,funcResult)	\
    (This)->lpVtbl -> SetStreamDataPartSize(This,dataPartSize,funcResult)

#define IOscilloscope_SetStreamingBuffersOptions(This,preBufferSize,synchroBufferSize)	\
    (This)->lpVtbl -> SetStreamingBuffersOptions(This,preBufferSize,synchroBufferSize)

#define IOscilloscope_SetStreamingDataOptions(This,waitForFullPreBuffer)	\
    (This)->lpVtbl -> SetStreamingDataOptions(This,waitForFullPreBuffer)

#define IOscilloscope_StartStreamingData(This)	\
    (This)->lpVtbl -> StartStreamingData(This)

#define IOscilloscope_RestartStreaming(This)	\
    (This)->lpVtbl -> RestartStreaming(This)

#define IOscilloscope_StopStreaming(This)	\
    (This)->lpVtbl -> StopStreaming(This)

#define IOscilloscope_IsSynchro(This,funcResult)	\
    (This)->lpVtbl -> IsSynchro(This,funcResult)

#define IOscilloscope_IsDataReady(This,ready)	\
    (This)->lpVtbl -> IsDataReady(This,ready)

#define IOscilloscope_GetSynchroIndexes(This,preBufferStartIndex,synchroIndex,funcResult)	\
    (This)->lpVtbl -> GetSynchroIndexes(This,preBufferStartIndex,synchroIndex,funcResult)

#define IOscilloscope_GetSampleCount(This,count)	\
    (This)->lpVtbl -> GetSampleCount(This,count)

#define IOscilloscope_GetChannelData(This,buffer,bufferSize,Channel)	\
    (This)->lpVtbl -> GetChannelData(This,buffer,bufferSize,Channel)

#define IOscilloscope_GetChannelSample(This,index,Channel,data)	\
    (This)->lpVtbl -> GetChannelSample(This,index,Channel,data)

#define IOscilloscope_GetChannelDataArray(This,Channel,buffer,from,bufferLength,funcResult)	\
    (This)->lpVtbl -> GetChannelDataArray(This,Channel,buffer,from,bufferLength,funcResult)

#define IOscilloscope_SetChannelDataArray(This,Channel,buffer,from,bufferLength,funcResult)	\
    (This)->lpVtbl -> SetChannelDataArray(This,Channel,buffer,from,bufferLength,funcResult)

#define IOscilloscope_GetVoltage(This,Channel,data)	\
    (This)->lpVtbl -> GetVoltage(This,Channel,data)

#define IOscilloscope_SetImmediateTriggerMode(This)	\
    (This)->lpVtbl -> SetImmediateTriggerMode(This)

#define IOscilloscope_SetDependedTriggerMode(This)	\
    (This)->lpVtbl -> SetDependedTriggerMode(This)

#define IOscilloscope_SetTrigger(This,Channel,trigger,triggerValue,funcResult)	\
    (This)->lpVtbl -> SetTrigger(This,Channel,trigger,triggerValue,funcResult)

#define IOscilloscope_SetChannelOnOff(This,Channel,OnOff)	\
    (This)->lpVtbl -> SetChannelOnOff(This,Channel,OnOff)

#define IOscilloscope_SetPipeMode(This,mode)	\
    (This)->lpVtbl -> SetPipeMode(This,mode)

#define IOscilloscope_SetPipeBufferSize(This,size)	\
    (This)->lpVtbl -> SetPipeBufferSize(This,size)

#define IOscilloscope_UseTrigger(This,UseTrigger)	\
    (This)->lpVtbl -> UseTrigger(This,UseTrigger)

#define IOscilloscope_SetTriggerEdge(This,edge)	\
    (This)->lpVtbl -> SetTriggerEdge(This,edge)

#define IOscilloscope_SetTriggerSource(This,src)	\
    (This)->lpVtbl -> SetTriggerSource(This,src)

#define IOscilloscope_SetTriggerType(This,type)	\
    (This)->lpVtbl -> SetTriggerType(This,type)

#define IOscilloscope_SetTriggerLevel(This,Channel,level)	\
    (This)->lpVtbl -> SetTriggerLevel(This,Channel,level)

#define IOscilloscope_SetDiffTriggerLevel(This,level)	\
    (This)->lpVtbl -> SetDiffTriggerLevel(This,level)

#define IOscilloscope_UseExtrenalClock(This,extClock)	\
    (This)->lpVtbl -> UseExtrenalClock(This,extClock)

#define IOscilloscope_SetTimerMultiplier(This,multiplier)	\
    (This)->lpVtbl -> SetTimerMultiplier(This,multiplier)

#define IOscilloscope_SetTimeBase(This,timeBase)	\
    (This)->lpVtbl -> SetTimeBase(This,timeBase)

#define IOscilloscope_SetSamplingFrequency(This,samplingFrequency)	\
    (This)->lpVtbl -> SetSamplingFrequency(This,samplingFrequency)

#define IOscilloscope_SetChannelMaxGain(This,Channel,voltage)	\
    (This)->lpVtbl -> SetChannelMaxGain(This,Channel,voltage)

#define IOscilloscope_GetSyncMark(This,Channel,MarkIndex,mark)	\
    (This)->lpVtbl -> GetSyncMark(This,Channel,MarkIndex,mark)

#define IOscilloscope_SetSyncMark(This,Channel,MarkIndex,mark)	\
    (This)->lpVtbl -> SetSyncMark(This,Channel,MarkIndex,mark)

#define IOscilloscope_GetMarkCount(This,Channel,markCount)	\
    (This)->lpVtbl -> GetMarkCount(This,Channel,markCount)

#define IOscilloscope_GetChannelStatParam(This,StatParam,Channel,value)	\
    (This)->lpVtbl -> GetChannelStatParam(This,StatParam,Channel,value)

#define IOscilloscope_SetChannelSyncSkip(This,Channel,syncSkip)	\
    (This)->lpVtbl -> SetChannelSyncSkip(This,Channel,syncSkip)

#define IOscilloscope_SetDecimation(This,Decimation)	\
    (This)->lpVtbl -> SetDecimation(This,Decimation)

#define IOscilloscope_ReSync(This)	\
    (This)->lpVtbl -> ReSync(This)

#define IOscilloscope_ClearData(This)	\
    (This)->lpVtbl -> ClearData(This)

#define IOscilloscope_SetChannelClosed(This,Channel,closed)	\
    (This)->lpVtbl -> SetChannelClosed(This,Channel,closed)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT __stdcall IOscilloscope_GetSynchroGUID_Proxy( 
    IOscilloscope * This,
    /* [retval][out] */ BSTR *synchroGUID);


void __RPC_STUB IOscilloscope_GetSynchroGUID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall IOscilloscope_SetSynchroGUID_Proxy( 
    IOscilloscope * This,
    /* [in] */ BSTR *synchroGUID,
    /* [retval][out] */ VARIANT_BOOL *funcResult);


void __RPC_STUB IOscilloscope_SetSynchroGUID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall IOscilloscope_ClearSynchroEvent_Proxy( 
    IOscilloscope * This);


void __RPC_STUB IOscilloscope_ClearSynchroEvent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall IOscilloscope_SetStreamingPause_Proxy( 
    IOscilloscope * This);


void __RPC_STUB IOscilloscope_SetStreamingPause_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall IOscilloscope_ClearStreamingPause_Proxy( 
    IOscilloscope * This);


void __RPC_STUB IOscilloscope_ClearStreamingPause_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall IOscilloscope_SetStreamDataPartSize_Proxy( 
    IOscilloscope * This,
    /* [in] */ int dataPartSize,
    /* [retval][out] */ VARIANT_BOOL *funcResult);


void __RPC_STUB IOscilloscope_SetStreamDataPartSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall IOscilloscope_SetStreamingBuffersOptions_Proxy( 
    IOscilloscope * This,
    /* [in] */ int preBufferSize,
    /* [in] */ int synchroBufferSize);


void __RPC_STUB IOscilloscope_SetStreamingBuffersOptions_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall IOscilloscope_SetStreamingDataOptions_Proxy( 
    IOscilloscope * This,
    /* [in] */ VARIANT_BOOL waitForFullPreBuffer);


void __RPC_STUB IOscilloscope_SetStreamingDataOptions_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall IOscilloscope_StartStreamingData_Proxy( 
    IOscilloscope * This);


void __RPC_STUB IOscilloscope_StartStreamingData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall IOscilloscope_RestartStreaming_Proxy( 
    IOscilloscope * This);


void __RPC_STUB IOscilloscope_RestartStreaming_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall IOscilloscope_StopStreaming_Proxy( 
    IOscilloscope * This);


void __RPC_STUB IOscilloscope_StopStreaming_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall IOscilloscope_IsSynchro_Proxy( 
    IOscilloscope * This,
    /* [retval][out] */ VARIANT_BOOL *funcResult);


void __RPC_STUB IOscilloscope_IsSynchro_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall IOscilloscope_IsDataReady_Proxy( 
    IOscilloscope * This,
    /* [retval][out] */ VARIANT_BOOL *ready);


void __RPC_STUB IOscilloscope_IsDataReady_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall IOscilloscope_GetSynchroIndexes_Proxy( 
    IOscilloscope * This,
    /* [out] */ long *preBufferStartIndex,
    /* [out] */ long *synchroIndex,
    /* [retval][out] */ VARIANT_BOOL *funcResult);


void __RPC_STUB IOscilloscope_GetSynchroIndexes_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall IOscilloscope_GetSampleCount_Proxy( 
    IOscilloscope * This,
    /* [retval][out] */ int *count);


void __RPC_STUB IOscilloscope_GetSampleCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall IOscilloscope_GetChannelData_Proxy( 
    IOscilloscope * This,
    /* [out][in] */ SAFEARRAY * buffer,
    /* [out][in] */ int *bufferSize,
    Channel Channel);


void __RPC_STUB IOscilloscope_GetChannelData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall IOscilloscope_GetChannelSample_Proxy( 
    IOscilloscope * This,
    int index,
    Channel Channel,
    /* [retval][out] */ double *data);


void __RPC_STUB IOscilloscope_GetChannelSample_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT __stdcall IOscilloscope_GetChannelDataArray_Proxy( 
    IOscilloscope * This,
    /* [in] */ Channel Channel,
    /* [out] */ double *buffer,
    /* [in] */ long from,
    /* [in] */ int bufferLength,
    /* [retval][out] */ int *funcResult);


void __RPC_STUB IOscilloscope_GetChannelDataArray_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall IOscilloscope_SetChannelDataArray_Proxy( 
    IOscilloscope * This,
    /* [in] */ Channel Channel,
    /* [in] */ double *buffer,
    /* [in] */ long from,
    /* [in] */ int bufferLength,
    /* [retval][out] */ int *funcResult);


void __RPC_STUB IOscilloscope_SetChannelDataArray_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall IOscilloscope_GetVoltage_Proxy( 
    IOscilloscope * This,
    Channel Channel,
    /* [retval][out] */ double *data);


void __RPC_STUB IOscilloscope_GetVoltage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall IOscilloscope_SetImmediateTriggerMode_Proxy( 
    IOscilloscope * This);


void __RPC_STUB IOscilloscope_SetImmediateTriggerMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall IOscilloscope_SetDependedTriggerMode_Proxy( 
    IOscilloscope * This);


void __RPC_STUB IOscilloscope_SetDependedTriggerMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall IOscilloscope_SetTrigger_Proxy( 
    IOscilloscope * This,
    /* [in] */ Channel Channel,
    /* [in] */ OscTriggerType trigger,
    /* [in] */ double triggerValue,
    /* [retval][out] */ VARIANT_BOOL *funcResult);


void __RPC_STUB IOscilloscope_SetTrigger_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall IOscilloscope_SetChannelOnOff_Proxy( 
    IOscilloscope * This,
    /* [in] */ Channel Channel,
    /* [in] */ OnOff OnOff);


void __RPC_STUB IOscilloscope_SetChannelOnOff_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT __stdcall IOscilloscope_SetPipeMode_Proxy( 
    IOscilloscope * This,
    /* [in] */ PipeMode mode);


void __RPC_STUB IOscilloscope_SetPipeMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall IOscilloscope_SetPipeBufferSize_Proxy( 
    IOscilloscope * This,
    /* [in] */ int size);


void __RPC_STUB IOscilloscope_SetPipeBufferSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall IOscilloscope_UseTrigger_Proxy( 
    IOscilloscope * This,
    /* [in] */ VARIANT_BOOL UseTrigger);


void __RPC_STUB IOscilloscope_UseTrigger_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT __stdcall IOscilloscope_SetTriggerEdge_Proxy( 
    IOscilloscope * This,
    /* [in] */ TriggerEdge edge);


void __RPC_STUB IOscilloscope_SetTriggerEdge_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT __stdcall IOscilloscope_SetTriggerSource_Proxy( 
    IOscilloscope * This,
    /* [in] */ TriggerSource src);


void __RPC_STUB IOscilloscope_SetTriggerSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT __stdcall IOscilloscope_SetTriggerType_Proxy( 
    IOscilloscope * This,
    /* [in] */ TriggerType type);


void __RPC_STUB IOscilloscope_SetTriggerType_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall IOscilloscope_SetTriggerLevel_Proxy( 
    IOscilloscope * This,
    /* [in] */ Channel Channel,
    /* [in] */ double level);


void __RPC_STUB IOscilloscope_SetTriggerLevel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall IOscilloscope_SetDiffTriggerLevel_Proxy( 
    IOscilloscope * This,
    /* [in] */ double level);


void __RPC_STUB IOscilloscope_SetDiffTriggerLevel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall IOscilloscope_UseExtrenalClock_Proxy( 
    IOscilloscope * This,
    /* [in] */ VARIANT_BOOL extClock);


void __RPC_STUB IOscilloscope_UseExtrenalClock_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT __stdcall IOscilloscope_SetTimerMultiplier_Proxy( 
    IOscilloscope * This,
    /* [in] */ TimerMultiplier multiplier);


void __RPC_STUB IOscilloscope_SetTimerMultiplier_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall IOscilloscope_SetTimeBase_Proxy( 
    IOscilloscope * This,
    /* [in] */ double timeBase);


void __RPC_STUB IOscilloscope_SetTimeBase_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall IOscilloscope_SetSamplingFrequency_Proxy( 
    IOscilloscope * This,
    /* [in] */ double samplingFrequency);


void __RPC_STUB IOscilloscope_SetSamplingFrequency_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall IOscilloscope_SetChannelMaxGain_Proxy( 
    IOscilloscope * This,
    /* [in] */ Channel Channel,
    /* [in] */ double voltage);


void __RPC_STUB IOscilloscope_SetChannelMaxGain_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall IOscilloscope_GetSyncMark_Proxy( 
    IOscilloscope * This,
    /* [in] */ Channel Channel,
    /* [in] */ long MarkIndex,
    /* [out] */ long *mark);


void __RPC_STUB IOscilloscope_GetSyncMark_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall IOscilloscope_SetSyncMark_Proxy( 
    IOscilloscope * This,
    /* [in] */ Channel Channel,
    /* [in] */ long MarkIndex,
    /* [in] */ long mark);


void __RPC_STUB IOscilloscope_SetSyncMark_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall IOscilloscope_GetMarkCount_Proxy( 
    IOscilloscope * This,
    /* [in] */ Channel Channel,
    /* [out] */ long *markCount);


void __RPC_STUB IOscilloscope_GetMarkCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall IOscilloscope_GetChannelStatParam_Proxy( 
    IOscilloscope * This,
    /* [in] */ StatParam StatParam,
    /* [in] */ Channel Channel,
    /* [retval][out] */ double *value);


void __RPC_STUB IOscilloscope_GetChannelStatParam_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall IOscilloscope_SetChannelSyncSkip_Proxy( 
    IOscilloscope * This,
    /* [in] */ Channel Channel,
    /* [in] */ int syncSkip);


void __RPC_STUB IOscilloscope_SetChannelSyncSkip_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall IOscilloscope_SetDecimation_Proxy( 
    IOscilloscope * This,
    /* [in] */ Decimation Decimation);


void __RPC_STUB IOscilloscope_SetDecimation_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall IOscilloscope_ReSync_Proxy( 
    IOscilloscope * This);


void __RPC_STUB IOscilloscope_ReSync_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall IOscilloscope_ClearData_Proxy( 
    IOscilloscope * This);


void __RPC_STUB IOscilloscope_ClearData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall IOscilloscope_SetChannelClosed_Proxy( 
    IOscilloscope * This,
    /* [in] */ Channel Channel,
    /* [in] */ VARIANT_BOOL closed);


void __RPC_STUB IOscilloscope_SetChannelClosed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IOscilloscope_INTERFACE_DEFINED__ */


#ifndef __ILogicAnalyzer_INTERFACE_DEFINED__
#define __ILogicAnalyzer_INTERFACE_DEFINED__

/* interface ILogicAnalyzer */
/* [object][helpstring][uuid] */ 


EXTERN_C const IID IID_ILogicAnalyzer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CF69C7C8-A84A-479F-9F67-ED20E7E9D8C8")
    ILogicAnalyzer : public IUnknown
    {
    public:
        virtual HRESULT __stdcall LanSetPipeMode( 
            /* [in] */ LanReadingMode mode) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall LanGetStreamingData( 
            /* [out][in] */ SAFEARRAY * buffer,
            /* [out][in] */ int *bufferSize) = 0;
        
        virtual HRESULT __stdcall LanStopStreaming( void) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall LanSetTimeBase( 
            /* [in] */ double timeBase) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall LanSetSamplingFrequency( 
            /* [in] */ double samplingFrequency) = 0;
        
        virtual HRESULT __stdcall LanSetPort( 
            /* [in] */ Channel Channel,
            /* [in] */ unsigned char value) = 0;
        
        virtual HRESULT __stdcall LanGetPort( 
            /* [in] */ Channel Channel,
            /* [out] */ unsigned char *value) = 0;
        
        virtual HRESULT __stdcall Test2( void) = 0;
        
        virtual HRESULT __stdcall GenSetData( 
            /* [in] */ unsigned char value,
            /* [in] */ int index) = 0;
        
        virtual HRESULT __stdcall GenWriteData( void) = 0;
        
        virtual HRESULT __stdcall GenSetLength( 
            /* [in] */ int len) = 0;
        
        virtual HRESULT __stdcall GenSetLoopStart( 
            /* [in] */ int start) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall GenRun( 
            /* [in] */ int loopCount) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall GenKeepOut( 
            /* [in] */ VARIANT_BOOL keepOut) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ILogicAnalyzerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ILogicAnalyzer * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ILogicAnalyzer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ILogicAnalyzer * This);
        
        HRESULT ( __stdcall *LanSetPipeMode )( 
            ILogicAnalyzer * This,
            /* [in] */ LanReadingMode mode);
        
        /* [helpstring] */ HRESULT ( __stdcall *LanGetStreamingData )( 
            ILogicAnalyzer * This,
            /* [out][in] */ SAFEARRAY * buffer,
            /* [out][in] */ int *bufferSize);
        
        HRESULT ( __stdcall *LanStopStreaming )( 
            ILogicAnalyzer * This);
        
        /* [helpstring] */ HRESULT ( __stdcall *LanSetTimeBase )( 
            ILogicAnalyzer * This,
            /* [in] */ double timeBase);
        
        /* [helpstring] */ HRESULT ( __stdcall *LanSetSamplingFrequency )( 
            ILogicAnalyzer * This,
            /* [in] */ double samplingFrequency);
        
        HRESULT ( __stdcall *LanSetPort )( 
            ILogicAnalyzer * This,
            /* [in] */ Channel Channel,
            /* [in] */ unsigned char value);
        
        HRESULT ( __stdcall *LanGetPort )( 
            ILogicAnalyzer * This,
            /* [in] */ Channel Channel,
            /* [out] */ unsigned char *value);
        
        HRESULT ( __stdcall *Test2 )( 
            ILogicAnalyzer * This);
        
        HRESULT ( __stdcall *GenSetData )( 
            ILogicAnalyzer * This,
            /* [in] */ unsigned char value,
            /* [in] */ int index);
        
        HRESULT ( __stdcall *GenWriteData )( 
            ILogicAnalyzer * This);
        
        HRESULT ( __stdcall *GenSetLength )( 
            ILogicAnalyzer * This,
            /* [in] */ int len);
        
        HRESULT ( __stdcall *GenSetLoopStart )( 
            ILogicAnalyzer * This,
            /* [in] */ int start);
        
        /* [helpstring] */ HRESULT ( __stdcall *GenRun )( 
            ILogicAnalyzer * This,
            /* [in] */ int loopCount);
        
        /* [helpstring] */ HRESULT ( __stdcall *GenKeepOut )( 
            ILogicAnalyzer * This,
            /* [in] */ VARIANT_BOOL keepOut);
        
        END_INTERFACE
    } ILogicAnalyzerVtbl;

    interface ILogicAnalyzer
    {
        CONST_VTBL struct ILogicAnalyzerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILogicAnalyzer_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ILogicAnalyzer_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ILogicAnalyzer_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ILogicAnalyzer_LanSetPipeMode(This,mode)	\
    (This)->lpVtbl -> LanSetPipeMode(This,mode)

#define ILogicAnalyzer_LanGetStreamingData(This,buffer,bufferSize)	\
    (This)->lpVtbl -> LanGetStreamingData(This,buffer,bufferSize)

#define ILogicAnalyzer_LanStopStreaming(This)	\
    (This)->lpVtbl -> LanStopStreaming(This)

#define ILogicAnalyzer_LanSetTimeBase(This,timeBase)	\
    (This)->lpVtbl -> LanSetTimeBase(This,timeBase)

#define ILogicAnalyzer_LanSetSamplingFrequency(This,samplingFrequency)	\
    (This)->lpVtbl -> LanSetSamplingFrequency(This,samplingFrequency)

#define ILogicAnalyzer_LanSetPort(This,Channel,value)	\
    (This)->lpVtbl -> LanSetPort(This,Channel,value)

#define ILogicAnalyzer_LanGetPort(This,Channel,value)	\
    (This)->lpVtbl -> LanGetPort(This,Channel,value)

#define ILogicAnalyzer_Test2(This)	\
    (This)->lpVtbl -> Test2(This)

#define ILogicAnalyzer_GenSetData(This,value,index)	\
    (This)->lpVtbl -> GenSetData(This,value,index)

#define ILogicAnalyzer_GenWriteData(This)	\
    (This)->lpVtbl -> GenWriteData(This)

#define ILogicAnalyzer_GenSetLength(This,len)	\
    (This)->lpVtbl -> GenSetLength(This,len)

#define ILogicAnalyzer_GenSetLoopStart(This,start)	\
    (This)->lpVtbl -> GenSetLoopStart(This,start)

#define ILogicAnalyzer_GenRun(This,loopCount)	\
    (This)->lpVtbl -> GenRun(This,loopCount)

#define ILogicAnalyzer_GenKeepOut(This,keepOut)	\
    (This)->lpVtbl -> GenKeepOut(This,keepOut)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT __stdcall ILogicAnalyzer_LanSetPipeMode_Proxy( 
    ILogicAnalyzer * This,
    /* [in] */ LanReadingMode mode);


void __RPC_STUB ILogicAnalyzer_LanSetPipeMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall ILogicAnalyzer_LanGetStreamingData_Proxy( 
    ILogicAnalyzer * This,
    /* [out][in] */ SAFEARRAY * buffer,
    /* [out][in] */ int *bufferSize);


void __RPC_STUB ILogicAnalyzer_LanGetStreamingData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT __stdcall ILogicAnalyzer_LanStopStreaming_Proxy( 
    ILogicAnalyzer * This);


void __RPC_STUB ILogicAnalyzer_LanStopStreaming_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall ILogicAnalyzer_LanSetTimeBase_Proxy( 
    ILogicAnalyzer * This,
    /* [in] */ double timeBase);


void __RPC_STUB ILogicAnalyzer_LanSetTimeBase_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall ILogicAnalyzer_LanSetSamplingFrequency_Proxy( 
    ILogicAnalyzer * This,
    /* [in] */ double samplingFrequency);


void __RPC_STUB ILogicAnalyzer_LanSetSamplingFrequency_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT __stdcall ILogicAnalyzer_LanSetPort_Proxy( 
    ILogicAnalyzer * This,
    /* [in] */ Channel Channel,
    /* [in] */ unsigned char value);


void __RPC_STUB ILogicAnalyzer_LanSetPort_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT __stdcall ILogicAnalyzer_LanGetPort_Proxy( 
    ILogicAnalyzer * This,
    /* [in] */ Channel Channel,
    /* [out] */ unsigned char *value);


void __RPC_STUB ILogicAnalyzer_LanGetPort_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT __stdcall ILogicAnalyzer_Test2_Proxy( 
    ILogicAnalyzer * This);


void __RPC_STUB ILogicAnalyzer_Test2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT __stdcall ILogicAnalyzer_GenSetData_Proxy( 
    ILogicAnalyzer * This,
    /* [in] */ unsigned char value,
    /* [in] */ int index);


void __RPC_STUB ILogicAnalyzer_GenSetData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT __stdcall ILogicAnalyzer_GenWriteData_Proxy( 
    ILogicAnalyzer * This);


void __RPC_STUB ILogicAnalyzer_GenWriteData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT __stdcall ILogicAnalyzer_GenSetLength_Proxy( 
    ILogicAnalyzer * This,
    /* [in] */ int len);


void __RPC_STUB ILogicAnalyzer_GenSetLength_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT __stdcall ILogicAnalyzer_GenSetLoopStart_Proxy( 
    ILogicAnalyzer * This,
    /* [in] */ int start);


void __RPC_STUB ILogicAnalyzer_GenSetLoopStart_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall ILogicAnalyzer_GenRun_Proxy( 
    ILogicAnalyzer * This,
    /* [in] */ int loopCount);


void __RPC_STUB ILogicAnalyzer_GenRun_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall ILogicAnalyzer_GenKeepOut_Proxy( 
    ILogicAnalyzer * This,
    /* [in] */ VARIANT_BOOL keepOut);


void __RPC_STUB ILogicAnalyzer_GenKeepOut_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ILogicAnalyzer_INTERFACE_DEFINED__ */


#ifndef __ISerialPort_INTERFACE_DEFINED__
#define __ISerialPort_INTERFACE_DEFINED__

/* interface ISerialPort */
/* [object][helpstring][uuid] */ 


EXTERN_C const IID IID_ISerialPort;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("92108E26-E773-4B46-A863-9915711A0409")
    ISerialPort : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT __stdcall Open( 
            /* [in] */ int baudrate,
            /* [retval][out] */ VARIANT_BOOL *funcResult) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall Close( 
            /* [retval][out] */ VARIANT_BOOL *funcResult) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall IsOpen( 
            /* [retval][out] */ VARIANT_BOOL *funcResult) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall GetBaudrate( 
            /* [out] */ int *baudrate,
            /* [retval][out] */ VARIANT_BOOL *funcResult) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall GetRealBaudrate( 
            /* [out] */ float *baudrate,
            /* [retval][out] */ VARIANT_BOOL *funcResult) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall SetBaudrate( 
            /* [in] */ int baudrate,
            /* [retval][out] */ VARIANT_BOOL *funcResult) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall GetParity( 
            /* [out] */ SerialPortParity *parity,
            /* [retval][out] */ VARIANT_BOOL *funcResult) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall SetParity( 
            /* [in] */ SerialPortParity parity,
            /* [retval][out] */ VARIANT_BOOL *funcResult) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall GetTxDelay( 
            /* [out] */ float *txDelay,
            /* [retval][out] */ VARIANT_BOOL *funcResult) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall SetTxDelay( 
            /* [in] */ float txDelay,
            /* [retval][out] */ VARIANT_BOOL *funcResult) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall GetOptions( 
            /* [out] */ SerialPortOptions *options,
            /* [retval][out] */ VARIANT_BOOL *funcResult) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall SetOptions( 
            /* [in] */ SerialPortOptions options,
            /* [retval][out] */ VARIANT_BOOL *funcResult) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall IsBreak( 
            /* [retval][out] */ VARIANT_BOOL *funcResult) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall SetBreak( 
            /* [in] */ VARIANT_BOOL virtualMode,
            /* [retval][out] */ VARIANT_BOOL *funcResult) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall ClearBreak( 
            /* [in] */ VARIANT_BOOL virtualMode,
            /* [retval][out] */ VARIANT_BOOL *funcResult) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall AmountInRxQueue( 
            /* [out] */ int *amount,
            /* [retval][out] */ VARIANT_BOOL *funcResult) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall ReadData( 
            /* [out] */ SAFEARRAY * *data,
            /* [in] */ int timeOut,
            /* [retval][out] */ int *readedLength) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall AmountInTxQueue( 
            /* [out] */ int *amount,
            /* [retval][out] */ VARIANT_BOOL *funcResult) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall WriteData( 
            /* [in] */ SAFEARRAY * *data,
            /* [in] */ SerialPortPacketType packetType,
            /* [retval][out] */ int *writedLength) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall IsOMaskSupported( 
            /* [in] */ unsigned char oMask,
            /* [retval][out] */ VARIANT_BOOL *funcResult) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall SetIOByOMask( 
            /* [in] */ unsigned char oMask,
            /* [retval][out] */ VARIANT_BOOL *funcResult) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall SetPinsState( 
            /* [in] */ unsigned char state,
            /* [retval][out] */ VARIANT_BOOL *funcResult) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall SetPins( 
            /* [in] */ unsigned char mask,
            /* [retval][out] */ VARIANT_BOOL *funcResult) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall ClearPins( 
            /* [in] */ unsigned char mask,
            /* [retval][out] */ VARIANT_BOOL *funcResult) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall GetPinsState( 
            /* [out] */ unsigned char *state,
            /* [retval][out] */ VARIANT_BOOL *funcResult) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISerialPortVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISerialPort * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISerialPort * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISerialPort * This);
        
        /* [helpstring] */ HRESULT ( __stdcall *Open )( 
            ISerialPort * This,
            /* [in] */ int baudrate,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *Close )( 
            ISerialPort * This,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *IsOpen )( 
            ISerialPort * This,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *GetBaudrate )( 
            ISerialPort * This,
            /* [out] */ int *baudrate,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *GetRealBaudrate )( 
            ISerialPort * This,
            /* [out] */ float *baudrate,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *SetBaudrate )( 
            ISerialPort * This,
            /* [in] */ int baudrate,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *GetParity )( 
            ISerialPort * This,
            /* [out] */ SerialPortParity *parity,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *SetParity )( 
            ISerialPort * This,
            /* [in] */ SerialPortParity parity,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *GetTxDelay )( 
            ISerialPort * This,
            /* [out] */ float *txDelay,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *SetTxDelay )( 
            ISerialPort * This,
            /* [in] */ float txDelay,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *GetOptions )( 
            ISerialPort * This,
            /* [out] */ SerialPortOptions *options,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *SetOptions )( 
            ISerialPort * This,
            /* [in] */ SerialPortOptions options,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *IsBreak )( 
            ISerialPort * This,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *SetBreak )( 
            ISerialPort * This,
            /* [in] */ VARIANT_BOOL virtualMode,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *ClearBreak )( 
            ISerialPort * This,
            /* [in] */ VARIANT_BOOL virtualMode,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *AmountInRxQueue )( 
            ISerialPort * This,
            /* [out] */ int *amount,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *ReadData )( 
            ISerialPort * This,
            /* [out] */ SAFEARRAY * *data,
            /* [in] */ int timeOut,
            /* [retval][out] */ int *readedLength);
        
        /* [helpstring] */ HRESULT ( __stdcall *AmountInTxQueue )( 
            ISerialPort * This,
            /* [out] */ int *amount,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *WriteData )( 
            ISerialPort * This,
            /* [in] */ SAFEARRAY * *data,
            /* [in] */ SerialPortPacketType packetType,
            /* [retval][out] */ int *writedLength);
        
        /* [helpstring] */ HRESULT ( __stdcall *IsOMaskSupported )( 
            ISerialPort * This,
            /* [in] */ unsigned char oMask,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *SetIOByOMask )( 
            ISerialPort * This,
            /* [in] */ unsigned char oMask,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *SetPinsState )( 
            ISerialPort * This,
            /* [in] */ unsigned char state,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *SetPins )( 
            ISerialPort * This,
            /* [in] */ unsigned char mask,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *ClearPins )( 
            ISerialPort * This,
            /* [in] */ unsigned char mask,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *GetPinsState )( 
            ISerialPort * This,
            /* [out] */ unsigned char *state,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        END_INTERFACE
    } ISerialPortVtbl;

    interface ISerialPort
    {
        CONST_VTBL struct ISerialPortVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISerialPort_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISerialPort_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISerialPort_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISerialPort_Open(This,baudrate,funcResult)	\
    (This)->lpVtbl -> Open(This,baudrate,funcResult)

#define ISerialPort_Close(This,funcResult)	\
    (This)->lpVtbl -> Close(This,funcResult)

#define ISerialPort_IsOpen(This,funcResult)	\
    (This)->lpVtbl -> IsOpen(This,funcResult)

#define ISerialPort_GetBaudrate(This,baudrate,funcResult)	\
    (This)->lpVtbl -> GetBaudrate(This,baudrate,funcResult)

#define ISerialPort_GetRealBaudrate(This,baudrate,funcResult)	\
    (This)->lpVtbl -> GetRealBaudrate(This,baudrate,funcResult)

#define ISerialPort_SetBaudrate(This,baudrate,funcResult)	\
    (This)->lpVtbl -> SetBaudrate(This,baudrate,funcResult)

#define ISerialPort_GetParity(This,parity,funcResult)	\
    (This)->lpVtbl -> GetParity(This,parity,funcResult)

#define ISerialPort_SetParity(This,parity,funcResult)	\
    (This)->lpVtbl -> SetParity(This,parity,funcResult)

#define ISerialPort_GetTxDelay(This,txDelay,funcResult)	\
    (This)->lpVtbl -> GetTxDelay(This,txDelay,funcResult)

#define ISerialPort_SetTxDelay(This,txDelay,funcResult)	\
    (This)->lpVtbl -> SetTxDelay(This,txDelay,funcResult)

#define ISerialPort_GetOptions(This,options,funcResult)	\
    (This)->lpVtbl -> GetOptions(This,options,funcResult)

#define ISerialPort_SetOptions(This,options,funcResult)	\
    (This)->lpVtbl -> SetOptions(This,options,funcResult)

#define ISerialPort_IsBreak(This,funcResult)	\
    (This)->lpVtbl -> IsBreak(This,funcResult)

#define ISerialPort_SetBreak(This,virtualMode,funcResult)	\
    (This)->lpVtbl -> SetBreak(This,virtualMode,funcResult)

#define ISerialPort_ClearBreak(This,virtualMode,funcResult)	\
    (This)->lpVtbl -> ClearBreak(This,virtualMode,funcResult)

#define ISerialPort_AmountInRxQueue(This,amount,funcResult)	\
    (This)->lpVtbl -> AmountInRxQueue(This,amount,funcResult)

#define ISerialPort_ReadData(This,data,timeOut,readedLength)	\
    (This)->lpVtbl -> ReadData(This,data,timeOut,readedLength)

#define ISerialPort_AmountInTxQueue(This,amount,funcResult)	\
    (This)->lpVtbl -> AmountInTxQueue(This,amount,funcResult)

#define ISerialPort_WriteData(This,data,packetType,writedLength)	\
    (This)->lpVtbl -> WriteData(This,data,packetType,writedLength)

#define ISerialPort_IsOMaskSupported(This,oMask,funcResult)	\
    (This)->lpVtbl -> IsOMaskSupported(This,oMask,funcResult)

#define ISerialPort_SetIOByOMask(This,oMask,funcResult)	\
    (This)->lpVtbl -> SetIOByOMask(This,oMask,funcResult)

#define ISerialPort_SetPinsState(This,state,funcResult)	\
    (This)->lpVtbl -> SetPinsState(This,state,funcResult)

#define ISerialPort_SetPins(This,mask,funcResult)	\
    (This)->lpVtbl -> SetPins(This,mask,funcResult)

#define ISerialPort_ClearPins(This,mask,funcResult)	\
    (This)->lpVtbl -> ClearPins(This,mask,funcResult)

#define ISerialPort_GetPinsState(This,state,funcResult)	\
    (This)->lpVtbl -> GetPinsState(This,state,funcResult)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT __stdcall ISerialPort_Open_Proxy( 
    ISerialPort * This,
    /* [in] */ int baudrate,
    /* [retval][out] */ VARIANT_BOOL *funcResult);


void __RPC_STUB ISerialPort_Open_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall ISerialPort_Close_Proxy( 
    ISerialPort * This,
    /* [retval][out] */ VARIANT_BOOL *funcResult);


void __RPC_STUB ISerialPort_Close_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall ISerialPort_IsOpen_Proxy( 
    ISerialPort * This,
    /* [retval][out] */ VARIANT_BOOL *funcResult);


void __RPC_STUB ISerialPort_IsOpen_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall ISerialPort_GetBaudrate_Proxy( 
    ISerialPort * This,
    /* [out] */ int *baudrate,
    /* [retval][out] */ VARIANT_BOOL *funcResult);


void __RPC_STUB ISerialPort_GetBaudrate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall ISerialPort_GetRealBaudrate_Proxy( 
    ISerialPort * This,
    /* [out] */ float *baudrate,
    /* [retval][out] */ VARIANT_BOOL *funcResult);


void __RPC_STUB ISerialPort_GetRealBaudrate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall ISerialPort_SetBaudrate_Proxy( 
    ISerialPort * This,
    /* [in] */ int baudrate,
    /* [retval][out] */ VARIANT_BOOL *funcResult);


void __RPC_STUB ISerialPort_SetBaudrate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall ISerialPort_GetParity_Proxy( 
    ISerialPort * This,
    /* [out] */ SerialPortParity *parity,
    /* [retval][out] */ VARIANT_BOOL *funcResult);


void __RPC_STUB ISerialPort_GetParity_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall ISerialPort_SetParity_Proxy( 
    ISerialPort * This,
    /* [in] */ SerialPortParity parity,
    /* [retval][out] */ VARIANT_BOOL *funcResult);


void __RPC_STUB ISerialPort_SetParity_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall ISerialPort_GetTxDelay_Proxy( 
    ISerialPort * This,
    /* [out] */ float *txDelay,
    /* [retval][out] */ VARIANT_BOOL *funcResult);


void __RPC_STUB ISerialPort_GetTxDelay_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall ISerialPort_SetTxDelay_Proxy( 
    ISerialPort * This,
    /* [in] */ float txDelay,
    /* [retval][out] */ VARIANT_BOOL *funcResult);


void __RPC_STUB ISerialPort_SetTxDelay_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall ISerialPort_GetOptions_Proxy( 
    ISerialPort * This,
    /* [out] */ SerialPortOptions *options,
    /* [retval][out] */ VARIANT_BOOL *funcResult);


void __RPC_STUB ISerialPort_GetOptions_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall ISerialPort_SetOptions_Proxy( 
    ISerialPort * This,
    /* [in] */ SerialPortOptions options,
    /* [retval][out] */ VARIANT_BOOL *funcResult);


void __RPC_STUB ISerialPort_SetOptions_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall ISerialPort_IsBreak_Proxy( 
    ISerialPort * This,
    /* [retval][out] */ VARIANT_BOOL *funcResult);


void __RPC_STUB ISerialPort_IsBreak_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall ISerialPort_SetBreak_Proxy( 
    ISerialPort * This,
    /* [in] */ VARIANT_BOOL virtualMode,
    /* [retval][out] */ VARIANT_BOOL *funcResult);


void __RPC_STUB ISerialPort_SetBreak_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall ISerialPort_ClearBreak_Proxy( 
    ISerialPort * This,
    /* [in] */ VARIANT_BOOL virtualMode,
    /* [retval][out] */ VARIANT_BOOL *funcResult);


void __RPC_STUB ISerialPort_ClearBreak_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall ISerialPort_AmountInRxQueue_Proxy( 
    ISerialPort * This,
    /* [out] */ int *amount,
    /* [retval][out] */ VARIANT_BOOL *funcResult);


void __RPC_STUB ISerialPort_AmountInRxQueue_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall ISerialPort_ReadData_Proxy( 
    ISerialPort * This,
    /* [out] */ SAFEARRAY * *data,
    /* [in] */ int timeOut,
    /* [retval][out] */ int *readedLength);


void __RPC_STUB ISerialPort_ReadData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall ISerialPort_AmountInTxQueue_Proxy( 
    ISerialPort * This,
    /* [out] */ int *amount,
    /* [retval][out] */ VARIANT_BOOL *funcResult);


void __RPC_STUB ISerialPort_AmountInTxQueue_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall ISerialPort_WriteData_Proxy( 
    ISerialPort * This,
    /* [in] */ SAFEARRAY * *data,
    /* [in] */ SerialPortPacketType packetType,
    /* [retval][out] */ int *writedLength);


void __RPC_STUB ISerialPort_WriteData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall ISerialPort_IsOMaskSupported_Proxy( 
    ISerialPort * This,
    /* [in] */ unsigned char oMask,
    /* [retval][out] */ VARIANT_BOOL *funcResult);


void __RPC_STUB ISerialPort_IsOMaskSupported_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall ISerialPort_SetIOByOMask_Proxy( 
    ISerialPort * This,
    /* [in] */ unsigned char oMask,
    /* [retval][out] */ VARIANT_BOOL *funcResult);


void __RPC_STUB ISerialPort_SetIOByOMask_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall ISerialPort_SetPinsState_Proxy( 
    ISerialPort * This,
    /* [in] */ unsigned char state,
    /* [retval][out] */ VARIANT_BOOL *funcResult);


void __RPC_STUB ISerialPort_SetPinsState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall ISerialPort_SetPins_Proxy( 
    ISerialPort * This,
    /* [in] */ unsigned char mask,
    /* [retval][out] */ VARIANT_BOOL *funcResult);


void __RPC_STUB ISerialPort_SetPins_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall ISerialPort_ClearPins_Proxy( 
    ISerialPort * This,
    /* [in] */ unsigned char mask,
    /* [retval][out] */ VARIANT_BOOL *funcResult);


void __RPC_STUB ISerialPort_ClearPins_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall ISerialPort_GetPinsState_Proxy( 
    ISerialPort * This,
    /* [out] */ unsigned char *state,
    /* [retval][out] */ VARIANT_BOOL *funcResult);


void __RPC_STUB ISerialPort_GetPinsState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISerialPort_INTERFACE_DEFINED__ */


#ifndef __IScanMaster_INTERFACE_DEFINED__
#define __IScanMaster_INTERFACE_DEFINED__

/* interface IScanMaster */
/* [object][helpstring][uuid] */ 


EXTERN_C const IID IID_IScanMaster;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FEFCD83F-205A-49C0-8E95-DFCFD6DCD8D3")
    IScanMaster : public ISerialPort
    {
    public:
        virtual /* [helpstring] */ HRESULT __stdcall IsScanMasterAPISpecifyed( 
            /* [retval][out] */ VARIANT_BOOL *funcResult) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall SetCurrentPinsState( 
            /* [retval][out] */ VARIANT_BOOL *funcResult) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall SetPower( 
            /* [in] */ int enable,
            /* [retval][out] */ VARIANT_BOOL *funcResult) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall SetProgramEn( 
            /* [in] */ int enable,
            /* [retval][out] */ VARIANT_BOOL *funcResult) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall IsPower( 
            /* [retval][out] */ VARIANT_BOOL *funcResult) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall IsProgramEn( 
            /* [retval][out] */ VARIANT_BOOL *funcResult) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IScanMasterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IScanMaster * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IScanMaster * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IScanMaster * This);
        
        /* [helpstring] */ HRESULT ( __stdcall *Open )( 
            IScanMaster * This,
            /* [in] */ int baudrate,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *Close )( 
            IScanMaster * This,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *IsOpen )( 
            IScanMaster * This,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *GetBaudrate )( 
            IScanMaster * This,
            /* [out] */ int *baudrate,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *GetRealBaudrate )( 
            IScanMaster * This,
            /* [out] */ float *baudrate,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *SetBaudrate )( 
            IScanMaster * This,
            /* [in] */ int baudrate,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *GetParity )( 
            IScanMaster * This,
            /* [out] */ SerialPortParity *parity,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *SetParity )( 
            IScanMaster * This,
            /* [in] */ SerialPortParity parity,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *GetTxDelay )( 
            IScanMaster * This,
            /* [out] */ float *txDelay,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *SetTxDelay )( 
            IScanMaster * This,
            /* [in] */ float txDelay,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *GetOptions )( 
            IScanMaster * This,
            /* [out] */ SerialPortOptions *options,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *SetOptions )( 
            IScanMaster * This,
            /* [in] */ SerialPortOptions options,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *IsBreak )( 
            IScanMaster * This,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *SetBreak )( 
            IScanMaster * This,
            /* [in] */ VARIANT_BOOL virtualMode,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *ClearBreak )( 
            IScanMaster * This,
            /* [in] */ VARIANT_BOOL virtualMode,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *AmountInRxQueue )( 
            IScanMaster * This,
            /* [out] */ int *amount,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *ReadData )( 
            IScanMaster * This,
            /* [out] */ SAFEARRAY * *data,
            /* [in] */ int timeOut,
            /* [retval][out] */ int *readedLength);
        
        /* [helpstring] */ HRESULT ( __stdcall *AmountInTxQueue )( 
            IScanMaster * This,
            /* [out] */ int *amount,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *WriteData )( 
            IScanMaster * This,
            /* [in] */ SAFEARRAY * *data,
            /* [in] */ SerialPortPacketType packetType,
            /* [retval][out] */ int *writedLength);
        
        /* [helpstring] */ HRESULT ( __stdcall *IsOMaskSupported )( 
            IScanMaster * This,
            /* [in] */ unsigned char oMask,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *SetIOByOMask )( 
            IScanMaster * This,
            /* [in] */ unsigned char oMask,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *SetPinsState )( 
            IScanMaster * This,
            /* [in] */ unsigned char state,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *SetPins )( 
            IScanMaster * This,
            /* [in] */ unsigned char mask,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *ClearPins )( 
            IScanMaster * This,
            /* [in] */ unsigned char mask,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *GetPinsState )( 
            IScanMaster * This,
            /* [out] */ unsigned char *state,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *IsScanMasterAPISpecifyed )( 
            IScanMaster * This,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *SetCurrentPinsState )( 
            IScanMaster * This,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *SetPower )( 
            IScanMaster * This,
            /* [in] */ int enable,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *SetProgramEn )( 
            IScanMaster * This,
            /* [in] */ int enable,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *IsPower )( 
            IScanMaster * This,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *IsProgramEn )( 
            IScanMaster * This,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        END_INTERFACE
    } IScanMasterVtbl;

    interface IScanMaster
    {
        CONST_VTBL struct IScanMasterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IScanMaster_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IScanMaster_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IScanMaster_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IScanMaster_Open(This,baudrate,funcResult)	\
    (This)->lpVtbl -> Open(This,baudrate,funcResult)

#define IScanMaster_Close(This,funcResult)	\
    (This)->lpVtbl -> Close(This,funcResult)

#define IScanMaster_IsOpen(This,funcResult)	\
    (This)->lpVtbl -> IsOpen(This,funcResult)

#define IScanMaster_GetBaudrate(This,baudrate,funcResult)	\
    (This)->lpVtbl -> GetBaudrate(This,baudrate,funcResult)

#define IScanMaster_GetRealBaudrate(This,baudrate,funcResult)	\
    (This)->lpVtbl -> GetRealBaudrate(This,baudrate,funcResult)

#define IScanMaster_SetBaudrate(This,baudrate,funcResult)	\
    (This)->lpVtbl -> SetBaudrate(This,baudrate,funcResult)

#define IScanMaster_GetParity(This,parity,funcResult)	\
    (This)->lpVtbl -> GetParity(This,parity,funcResult)

#define IScanMaster_SetParity(This,parity,funcResult)	\
    (This)->lpVtbl -> SetParity(This,parity,funcResult)

#define IScanMaster_GetTxDelay(This,txDelay,funcResult)	\
    (This)->lpVtbl -> GetTxDelay(This,txDelay,funcResult)

#define IScanMaster_SetTxDelay(This,txDelay,funcResult)	\
    (This)->lpVtbl -> SetTxDelay(This,txDelay,funcResult)

#define IScanMaster_GetOptions(This,options,funcResult)	\
    (This)->lpVtbl -> GetOptions(This,options,funcResult)

#define IScanMaster_SetOptions(This,options,funcResult)	\
    (This)->lpVtbl -> SetOptions(This,options,funcResult)

#define IScanMaster_IsBreak(This,funcResult)	\
    (This)->lpVtbl -> IsBreak(This,funcResult)

#define IScanMaster_SetBreak(This,virtualMode,funcResult)	\
    (This)->lpVtbl -> SetBreak(This,virtualMode,funcResult)

#define IScanMaster_ClearBreak(This,virtualMode,funcResult)	\
    (This)->lpVtbl -> ClearBreak(This,virtualMode,funcResult)

#define IScanMaster_AmountInRxQueue(This,amount,funcResult)	\
    (This)->lpVtbl -> AmountInRxQueue(This,amount,funcResult)

#define IScanMaster_ReadData(This,data,timeOut,readedLength)	\
    (This)->lpVtbl -> ReadData(This,data,timeOut,readedLength)

#define IScanMaster_AmountInTxQueue(This,amount,funcResult)	\
    (This)->lpVtbl -> AmountInTxQueue(This,amount,funcResult)

#define IScanMaster_WriteData(This,data,packetType,writedLength)	\
    (This)->lpVtbl -> WriteData(This,data,packetType,writedLength)

#define IScanMaster_IsOMaskSupported(This,oMask,funcResult)	\
    (This)->lpVtbl -> IsOMaskSupported(This,oMask,funcResult)

#define IScanMaster_SetIOByOMask(This,oMask,funcResult)	\
    (This)->lpVtbl -> SetIOByOMask(This,oMask,funcResult)

#define IScanMaster_SetPinsState(This,state,funcResult)	\
    (This)->lpVtbl -> SetPinsState(This,state,funcResult)

#define IScanMaster_SetPins(This,mask,funcResult)	\
    (This)->lpVtbl -> SetPins(This,mask,funcResult)

#define IScanMaster_ClearPins(This,mask,funcResult)	\
    (This)->lpVtbl -> ClearPins(This,mask,funcResult)

#define IScanMaster_GetPinsState(This,state,funcResult)	\
    (This)->lpVtbl -> GetPinsState(This,state,funcResult)


#define IScanMaster_IsScanMasterAPISpecifyed(This,funcResult)	\
    (This)->lpVtbl -> IsScanMasterAPISpecifyed(This,funcResult)

#define IScanMaster_SetCurrentPinsState(This,funcResult)	\
    (This)->lpVtbl -> SetCurrentPinsState(This,funcResult)

#define IScanMaster_SetPower(This,enable,funcResult)	\
    (This)->lpVtbl -> SetPower(This,enable,funcResult)

#define IScanMaster_SetProgramEn(This,enable,funcResult)	\
    (This)->lpVtbl -> SetProgramEn(This,enable,funcResult)

#define IScanMaster_IsPower(This,funcResult)	\
    (This)->lpVtbl -> IsPower(This,funcResult)

#define IScanMaster_IsProgramEn(This,funcResult)	\
    (This)->lpVtbl -> IsProgramEn(This,funcResult)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT __stdcall IScanMaster_IsScanMasterAPISpecifyed_Proxy( 
    IScanMaster * This,
    /* [retval][out] */ VARIANT_BOOL *funcResult);


void __RPC_STUB IScanMaster_IsScanMasterAPISpecifyed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall IScanMaster_SetCurrentPinsState_Proxy( 
    IScanMaster * This,
    /* [retval][out] */ VARIANT_BOOL *funcResult);


void __RPC_STUB IScanMaster_SetCurrentPinsState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall IScanMaster_SetPower_Proxy( 
    IScanMaster * This,
    /* [in] */ int enable,
    /* [retval][out] */ VARIANT_BOOL *funcResult);


void __RPC_STUB IScanMaster_SetPower_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall IScanMaster_SetProgramEn_Proxy( 
    IScanMaster * This,
    /* [in] */ int enable,
    /* [retval][out] */ VARIANT_BOOL *funcResult);


void __RPC_STUB IScanMaster_SetProgramEn_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall IScanMaster_IsPower_Proxy( 
    IScanMaster * This,
    /* [retval][out] */ VARIANT_BOOL *funcResult);


void __RPC_STUB IScanMaster_IsPower_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall IScanMaster_IsProgramEn_Proxy( 
    IScanMaster * This,
    /* [retval][out] */ VARIANT_BOOL *funcResult);


void __RPC_STUB IScanMaster_IsProgramEn_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IScanMaster_INTERFACE_DEFINED__ */


#ifndef __ISerial_INTERFACE_DEFINED__
#define __ISerial_INTERFACE_DEFINED__

/* interface ISerial */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_ISerial;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E50F9385-F34C-47C3-A020-BEB6274F7A45")
    ISerial : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsSerialOpen( 
            /* [retval][out] */ VARIANT_BOOL *funcResult) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OpenSerial( 
            /* [in] */ int baudrate,
            /* [in] */ VARIANT_BOOL ckPol,
            /* [in] */ VARIANT_BOOL ckPha,
            /* [retval][out] */ VARIANT_BOOL *funcResult) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CloseSerial( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SerialSetCSLevel( 
            /* [in] */ VARIANT_BOOL csLevel,
            /* [retval][out] */ VARIANT_BOOL *funcResult) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SerialSendStart( 
            /* [retval][out] */ VARIANT_BOOL *funcResult) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SerialSendStop( 
            /* [retval][out] */ VARIANT_BOOL *funcResult) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SerialExchangeData( 
            /* [in] */ unsigned char txData,
            /* [in] */ unsigned char txBitCount,
            /* [out] */ unsigned char *rxData,
            /* [out] */ unsigned char *rxBitCount,
            /* [in] */ VARIANT_BOOL exchangeAck,
            /* [out] */ VARIANT_BOOL *nonAckBit,
            /* [retval][out] */ VARIANT_BOOL *funcResult) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISerialVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISerial * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISerial * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISerial * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsSerialOpen )( 
            ISerial * This,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OpenSerial )( 
            ISerial * This,
            /* [in] */ int baudrate,
            /* [in] */ VARIANT_BOOL ckPol,
            /* [in] */ VARIANT_BOOL ckPha,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CloseSerial )( 
            ISerial * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SerialSetCSLevel )( 
            ISerial * This,
            /* [in] */ VARIANT_BOOL csLevel,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SerialSendStart )( 
            ISerial * This,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SerialSendStop )( 
            ISerial * This,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SerialExchangeData )( 
            ISerial * This,
            /* [in] */ unsigned char txData,
            /* [in] */ unsigned char txBitCount,
            /* [out] */ unsigned char *rxData,
            /* [out] */ unsigned char *rxBitCount,
            /* [in] */ VARIANT_BOOL exchangeAck,
            /* [out] */ VARIANT_BOOL *nonAckBit,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        END_INTERFACE
    } ISerialVtbl;

    interface ISerial
    {
        CONST_VTBL struct ISerialVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISerial_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISerial_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISerial_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISerial_IsSerialOpen(This,funcResult)	\
    (This)->lpVtbl -> IsSerialOpen(This,funcResult)

#define ISerial_OpenSerial(This,baudrate,ckPol,ckPha,funcResult)	\
    (This)->lpVtbl -> OpenSerial(This,baudrate,ckPol,ckPha,funcResult)

#define ISerial_CloseSerial(This)	\
    (This)->lpVtbl -> CloseSerial(This)

#define ISerial_SerialSetCSLevel(This,csLevel,funcResult)	\
    (This)->lpVtbl -> SerialSetCSLevel(This,csLevel,funcResult)

#define ISerial_SerialSendStart(This,funcResult)	\
    (This)->lpVtbl -> SerialSendStart(This,funcResult)

#define ISerial_SerialSendStop(This,funcResult)	\
    (This)->lpVtbl -> SerialSendStop(This,funcResult)

#define ISerial_SerialExchangeData(This,txData,txBitCount,rxData,rxBitCount,exchangeAck,nonAckBit,funcResult)	\
    (This)->lpVtbl -> SerialExchangeData(This,txData,txBitCount,rxData,rxBitCount,exchangeAck,nonAckBit,funcResult)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISerial_IsSerialOpen_Proxy( 
    ISerial * This,
    /* [retval][out] */ VARIANT_BOOL *funcResult);


void __RPC_STUB ISerial_IsSerialOpen_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISerial_OpenSerial_Proxy( 
    ISerial * This,
    /* [in] */ int baudrate,
    /* [in] */ VARIANT_BOOL ckPol,
    /* [in] */ VARIANT_BOOL ckPha,
    /* [retval][out] */ VARIANT_BOOL *funcResult);


void __RPC_STUB ISerial_OpenSerial_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISerial_CloseSerial_Proxy( 
    ISerial * This);


void __RPC_STUB ISerial_CloseSerial_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ISerial_SerialSetCSLevel_Proxy( 
    ISerial * This,
    /* [in] */ VARIANT_BOOL csLevel,
    /* [retval][out] */ VARIANT_BOOL *funcResult);


void __RPC_STUB ISerial_SerialSetCSLevel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ISerial_SerialSendStart_Proxy( 
    ISerial * This,
    /* [retval][out] */ VARIANT_BOOL *funcResult);


void __RPC_STUB ISerial_SerialSendStart_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [id] */ HRESULT STDMETHODCALLTYPE ISerial_SerialSendStop_Proxy( 
    ISerial * This,
    /* [retval][out] */ VARIANT_BOOL *funcResult);


void __RPC_STUB ISerial_SerialSendStop_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ISerial_SerialExchangeData_Proxy( 
    ISerial * This,
    /* [in] */ unsigned char txData,
    /* [in] */ unsigned char txBitCount,
    /* [out] */ unsigned char *rxData,
    /* [out] */ unsigned char *rxBitCount,
    /* [in] */ VARIANT_BOOL exchangeAck,
    /* [out] */ VARIANT_BOOL *nonAckBit,
    /* [retval][out] */ VARIANT_BOOL *funcResult);


void __RPC_STUB ISerial_SerialExchangeData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISerial_INTERFACE_DEFINED__ */


#ifndef __ISynchronizer_INTERFACE_DEFINED__
#define __ISynchronizer_INTERFACE_DEFINED__

/* interface ISynchronizer */
/* [object][helpstring][uuid] */ 


EXTERN_C const IID IID_ISynchronizer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F3F2311F-72D1-4F96-8E80-FDA2CAF6C372")
    ISynchronizer : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT __stdcall GetSynchroGUID( 
            /* [retval][out] */ BSTR *synchroGUID) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall SetSynchroGUID( 
            /* [in] */ BSTR *synchroGUID,
            /* [retval][out] */ VARIANT_BOOL *funcResult) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall IsSynchroEvent( 
            /* [retval][out] */ VARIANT_BOOL *funcResult) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall SetSynchroEvent( 
            /* [in] */ long synchroIndex,
            /* [retval][out] */ VARIANT_BOOL *funcResult) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall GetSynchroEvent( 
            /* [out] */ long *synchroIndex,
            /* [retval][out] */ VARIANT_BOOL *funcResult) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall ClearSynchroEvent( void) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall IsPause( 
            /* [retval][out] */ VARIANT_BOOL *funcResult) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall SetPause( void) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall ClearPause( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISynchronizerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISynchronizer * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISynchronizer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISynchronizer * This);
        
        /* [helpstring] */ HRESULT ( __stdcall *GetSynchroGUID )( 
            ISynchronizer * This,
            /* [retval][out] */ BSTR *synchroGUID);
        
        /* [helpstring] */ HRESULT ( __stdcall *SetSynchroGUID )( 
            ISynchronizer * This,
            /* [in] */ BSTR *synchroGUID,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *IsSynchroEvent )( 
            ISynchronizer * This,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *SetSynchroEvent )( 
            ISynchronizer * This,
            /* [in] */ long synchroIndex,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *GetSynchroEvent )( 
            ISynchronizer * This,
            /* [out] */ long *synchroIndex,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *ClearSynchroEvent )( 
            ISynchronizer * This);
        
        /* [helpstring] */ HRESULT ( __stdcall *IsPause )( 
            ISynchronizer * This,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *SetPause )( 
            ISynchronizer * This);
        
        /* [helpstring] */ HRESULT ( __stdcall *ClearPause )( 
            ISynchronizer * This);
        
        END_INTERFACE
    } ISynchronizerVtbl;

    interface ISynchronizer
    {
        CONST_VTBL struct ISynchronizerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISynchronizer_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ISynchronizer_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ISynchronizer_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ISynchronizer_GetSynchroGUID(This,synchroGUID)	\
    (This)->lpVtbl -> GetSynchroGUID(This,synchroGUID)

#define ISynchronizer_SetSynchroGUID(This,synchroGUID,funcResult)	\
    (This)->lpVtbl -> SetSynchroGUID(This,synchroGUID,funcResult)

#define ISynchronizer_IsSynchroEvent(This,funcResult)	\
    (This)->lpVtbl -> IsSynchroEvent(This,funcResult)

#define ISynchronizer_SetSynchroEvent(This,synchroIndex,funcResult)	\
    (This)->lpVtbl -> SetSynchroEvent(This,synchroIndex,funcResult)

#define ISynchronizer_GetSynchroEvent(This,synchroIndex,funcResult)	\
    (This)->lpVtbl -> GetSynchroEvent(This,synchroIndex,funcResult)

#define ISynchronizer_ClearSynchroEvent(This)	\
    (This)->lpVtbl -> ClearSynchroEvent(This)

#define ISynchronizer_IsPause(This,funcResult)	\
    (This)->lpVtbl -> IsPause(This,funcResult)

#define ISynchronizer_SetPause(This)	\
    (This)->lpVtbl -> SetPause(This)

#define ISynchronizer_ClearPause(This)	\
    (This)->lpVtbl -> ClearPause(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT __stdcall ISynchronizer_GetSynchroGUID_Proxy( 
    ISynchronizer * This,
    /* [retval][out] */ BSTR *synchroGUID);


void __RPC_STUB ISynchronizer_GetSynchroGUID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall ISynchronizer_SetSynchroGUID_Proxy( 
    ISynchronizer * This,
    /* [in] */ BSTR *synchroGUID,
    /* [retval][out] */ VARIANT_BOOL *funcResult);


void __RPC_STUB ISynchronizer_SetSynchroGUID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall ISynchronizer_IsSynchroEvent_Proxy( 
    ISynchronizer * This,
    /* [retval][out] */ VARIANT_BOOL *funcResult);


void __RPC_STUB ISynchronizer_IsSynchroEvent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall ISynchronizer_SetSynchroEvent_Proxy( 
    ISynchronizer * This,
    /* [in] */ long synchroIndex,
    /* [retval][out] */ VARIANT_BOOL *funcResult);


void __RPC_STUB ISynchronizer_SetSynchroEvent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall ISynchronizer_GetSynchroEvent_Proxy( 
    ISynchronizer * This,
    /* [out] */ long *synchroIndex,
    /* [retval][out] */ VARIANT_BOOL *funcResult);


void __RPC_STUB ISynchronizer_GetSynchroEvent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall ISynchronizer_ClearSynchroEvent_Proxy( 
    ISynchronizer * This);


void __RPC_STUB ISynchronizer_ClearSynchroEvent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall ISynchronizer_IsPause_Proxy( 
    ISynchronizer * This,
    /* [retval][out] */ VARIANT_BOOL *funcResult);


void __RPC_STUB ISynchronizer_IsPause_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall ISynchronizer_SetPause_Proxy( 
    ISynchronizer * This);


void __RPC_STUB ISynchronizer_SetPause_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall ISynchronizer_ClearPause_Proxy( 
    ISynchronizer * This);


void __RPC_STUB ISynchronizer_ClearPause_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ISynchronizer_INTERFACE_DEFINED__ */


#ifndef __ILoader_INTERFACE_DEFINED__
#define __ILoader_INTERFACE_DEFINED__

/* interface ILoader */
/* [object][helpstring][uuid] */ 


EXTERN_C const IID IID_ILoader;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1DB8772F-1AB2-4C65-8142-A59275FD1FE5")
    ILoader : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT __stdcall SiUpload( 
            /* [in] */ int comPortNumber,
            /* [in] */ int baudrate,
            /* [in] */ BSTR *filePath,
            /* [in] */ BSTR *deviceSerial,
            /* [out] */ BSTR *deviceVersion,
            /* [out] */ BSTR *deviceGUID,
            /* [retval][out] */ VARIANT_BOOL *funcResult) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall GetProgress( 
            /* [retval][out] */ int *progress) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall GetLastError( 
            /* [out] */ BSTR *errorString,
            /* [retval][out] */ VARIANT_BOOL *funcResult) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ILoaderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ILoader * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ILoader * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ILoader * This);
        
        /* [helpstring] */ HRESULT ( __stdcall *SiUpload )( 
            ILoader * This,
            /* [in] */ int comPortNumber,
            /* [in] */ int baudrate,
            /* [in] */ BSTR *filePath,
            /* [in] */ BSTR *deviceSerial,
            /* [out] */ BSTR *deviceVersion,
            /* [out] */ BSTR *deviceGUID,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring] */ HRESULT ( __stdcall *GetProgress )( 
            ILoader * This,
            /* [retval][out] */ int *progress);
        
        /* [helpstring] */ HRESULT ( __stdcall *GetLastError )( 
            ILoader * This,
            /* [out] */ BSTR *errorString,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        END_INTERFACE
    } ILoaderVtbl;

    interface ILoader
    {
        CONST_VTBL struct ILoaderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILoader_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ILoader_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ILoader_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ILoader_SiUpload(This,comPortNumber,baudrate,filePath,deviceSerial,deviceVersion,deviceGUID,funcResult)	\
    (This)->lpVtbl -> SiUpload(This,comPortNumber,baudrate,filePath,deviceSerial,deviceVersion,deviceGUID,funcResult)

#define ILoader_GetProgress(This,progress)	\
    (This)->lpVtbl -> GetProgress(This,progress)

#define ILoader_GetLastError(This,errorString,funcResult)	\
    (This)->lpVtbl -> GetLastError(This,errorString,funcResult)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT __stdcall ILoader_SiUpload_Proxy( 
    ILoader * This,
    /* [in] */ int comPortNumber,
    /* [in] */ int baudrate,
    /* [in] */ BSTR *filePath,
    /* [in] */ BSTR *deviceSerial,
    /* [out] */ BSTR *deviceVersion,
    /* [out] */ BSTR *deviceGUID,
    /* [retval][out] */ VARIANT_BOOL *funcResult);


void __RPC_STUB ILoader_SiUpload_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall ILoader_GetProgress_Proxy( 
    ILoader * This,
    /* [retval][out] */ int *progress);


void __RPC_STUB ILoader_GetProgress_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT __stdcall ILoader_GetLastError_Proxy( 
    ILoader * This,
    /* [out] */ BSTR *errorString,
    /* [retval][out] */ VARIANT_BOOL *funcResult);


void __RPC_STUB ILoader_GetLastError_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ILoader_INTERFACE_DEFINED__ */


#ifndef __IMultiscope_INTERFACE_DEFINED__
#define __IMultiscope_INTERFACE_DEFINED__

/* interface IMultiscope */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IMultiscope;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D7CBA3E2-ECD3-4990-9DBA-34E772B78DFF")
    IMultiscope : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_timeBase( 
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_timeBase( 
            /* [in] */ double pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_MaxGain( 
            /* [in] */ long ChannelIndex,
            /* [retval][out] */ double *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_MaxGain( 
            /* [in] */ long ChannelIndex,
            /* [in] */ double pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetValue( 
            long ChannelIndex,
            long SampleIndex,
            /* [retval][out] */ double *value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Run( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Init( 
            /* [in] */ long DeviceCount,
            /* [retval][out] */ VARIANT_BOOL *funcResult) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Stop( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Uninit( 
            /* [retval][out] */ VARIANT_BOOL *funcResult) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_FrameLength( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_MaxFrameLength( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_MaxFrameLength( 
            /* [in] */ long pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSyncMark( 
            /* [in] */ long MarkIndex,
            /* [retval][out] */ long *mark) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_markCount( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetTrigger( 
            /* [in] */ long ChannelIndex,
            /* [in] */ OscTriggerType trigger,
            /* [in] */ double triggerValue,
            /* [retval][out] */ VARIANT_BOOL *funcResult) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMultiscopeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMultiscope * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMultiscope * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMultiscope * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMultiscope * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMultiscope * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMultiscope * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMultiscope * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_timeBase )( 
            IMultiscope * This,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_timeBase )( 
            IMultiscope * This,
            /* [in] */ double pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MaxGain )( 
            IMultiscope * This,
            /* [in] */ long ChannelIndex,
            /* [retval][out] */ double *pVal);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_MaxGain )( 
            IMultiscope * This,
            /* [in] */ long ChannelIndex,
            /* [in] */ double pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_count )( 
            IMultiscope * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetValue )( 
            IMultiscope * This,
            long ChannelIndex,
            long SampleIndex,
            /* [retval][out] */ double *value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Run )( 
            IMultiscope * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Init )( 
            IMultiscope * This,
            /* [in] */ long DeviceCount,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Stop )( 
            IMultiscope * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Uninit )( 
            IMultiscope * This,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FrameLength )( 
            IMultiscope * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MaxFrameLength )( 
            IMultiscope * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_MaxFrameLength )( 
            IMultiscope * This,
            /* [in] */ long pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSyncMark )( 
            IMultiscope * This,
            /* [in] */ long MarkIndex,
            /* [retval][out] */ long *mark);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_markCount )( 
            IMultiscope * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetTrigger )( 
            IMultiscope * This,
            /* [in] */ long ChannelIndex,
            /* [in] */ OscTriggerType trigger,
            /* [in] */ double triggerValue,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        END_INTERFACE
    } IMultiscopeVtbl;

    interface IMultiscope
    {
        CONST_VTBL struct IMultiscopeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMultiscope_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMultiscope_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMultiscope_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMultiscope_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IMultiscope_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IMultiscope_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IMultiscope_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IMultiscope_get_timeBase(This,pVal)	\
    (This)->lpVtbl -> get_timeBase(This,pVal)

#define IMultiscope_put_timeBase(This,pVal)	\
    (This)->lpVtbl -> put_timeBase(This,pVal)

#define IMultiscope_get_MaxGain(This,ChannelIndex,pVal)	\
    (This)->lpVtbl -> get_MaxGain(This,ChannelIndex,pVal)

#define IMultiscope_put_MaxGain(This,ChannelIndex,pVal)	\
    (This)->lpVtbl -> put_MaxGain(This,ChannelIndex,pVal)

#define IMultiscope_get_count(This,pVal)	\
    (This)->lpVtbl -> get_count(This,pVal)

#define IMultiscope_GetValue(This,ChannelIndex,SampleIndex,value)	\
    (This)->lpVtbl -> GetValue(This,ChannelIndex,SampleIndex,value)

#define IMultiscope_Run(This)	\
    (This)->lpVtbl -> Run(This)

#define IMultiscope_Init(This,DeviceCount,funcResult)	\
    (This)->lpVtbl -> Init(This,DeviceCount,funcResult)

#define IMultiscope_Stop(This)	\
    (This)->lpVtbl -> Stop(This)

#define IMultiscope_Uninit(This,funcResult)	\
    (This)->lpVtbl -> Uninit(This,funcResult)

#define IMultiscope_get_FrameLength(This,pVal)	\
    (This)->lpVtbl -> get_FrameLength(This,pVal)

#define IMultiscope_get_MaxFrameLength(This,pVal)	\
    (This)->lpVtbl -> get_MaxFrameLength(This,pVal)

#define IMultiscope_put_MaxFrameLength(This,pVal)	\
    (This)->lpVtbl -> put_MaxFrameLength(This,pVal)

#define IMultiscope_GetSyncMark(This,MarkIndex,mark)	\
    (This)->lpVtbl -> GetSyncMark(This,MarkIndex,mark)

#define IMultiscope_get_markCount(This,pVal)	\
    (This)->lpVtbl -> get_markCount(This,pVal)

#define IMultiscope_SetTrigger(This,ChannelIndex,trigger,triggerValue,funcResult)	\
    (This)->lpVtbl -> SetTrigger(This,ChannelIndex,trigger,triggerValue,funcResult)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IMultiscope_get_timeBase_Proxy( 
    IMultiscope * This,
    /* [retval][out] */ double *pVal);


void __RPC_STUB IMultiscope_get_timeBase_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE IMultiscope_put_timeBase_Proxy( 
    IMultiscope * This,
    /* [in] */ double pVal);


void __RPC_STUB IMultiscope_put_timeBase_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IMultiscope_get_MaxGain_Proxy( 
    IMultiscope * This,
    /* [in] */ long ChannelIndex,
    /* [retval][out] */ double *pVal);


void __RPC_STUB IMultiscope_get_MaxGain_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE IMultiscope_put_MaxGain_Proxy( 
    IMultiscope * This,
    /* [in] */ long ChannelIndex,
    /* [in] */ double pVal);


void __RPC_STUB IMultiscope_put_MaxGain_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IMultiscope_get_count_Proxy( 
    IMultiscope * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB IMultiscope_get_count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IMultiscope_GetValue_Proxy( 
    IMultiscope * This,
    long ChannelIndex,
    long SampleIndex,
    /* [retval][out] */ double *value);


void __RPC_STUB IMultiscope_GetValue_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IMultiscope_Run_Proxy( 
    IMultiscope * This);


void __RPC_STUB IMultiscope_Run_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IMultiscope_Init_Proxy( 
    IMultiscope * This,
    /* [in] */ long DeviceCount,
    /* [retval][out] */ VARIANT_BOOL *funcResult);


void __RPC_STUB IMultiscope_Init_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IMultiscope_Stop_Proxy( 
    IMultiscope * This);


void __RPC_STUB IMultiscope_Stop_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IMultiscope_Uninit_Proxy( 
    IMultiscope * This,
    /* [retval][out] */ VARIANT_BOOL *funcResult);


void __RPC_STUB IMultiscope_Uninit_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IMultiscope_get_FrameLength_Proxy( 
    IMultiscope * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB IMultiscope_get_FrameLength_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IMultiscope_get_MaxFrameLength_Proxy( 
    IMultiscope * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB IMultiscope_get_MaxFrameLength_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE IMultiscope_put_MaxFrameLength_Proxy( 
    IMultiscope * This,
    /* [in] */ long pVal);


void __RPC_STUB IMultiscope_put_MaxFrameLength_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IMultiscope_GetSyncMark_Proxy( 
    IMultiscope * This,
    /* [in] */ long MarkIndex,
    /* [retval][out] */ long *mark);


void __RPC_STUB IMultiscope_GetSyncMark_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IMultiscope_get_markCount_Proxy( 
    IMultiscope * This,
    /* [retval][out] */ long *pVal);


void __RPC_STUB IMultiscope_get_markCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IMultiscope_SetTrigger_Proxy( 
    IMultiscope * This,
    /* [in] */ long ChannelIndex,
    /* [in] */ OscTriggerType trigger,
    /* [in] */ double triggerValue,
    /* [retval][out] */ VARIANT_BOOL *funcResult);


void __RPC_STUB IMultiscope_SetTrigger_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMultiscope_INTERFACE_DEFINED__ */


#ifndef __IMMKey_INTERFACE_DEFINED__
#define __IMMKey_INTERFACE_DEFINED__

/* interface IMMKey */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IMMKey;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("18477861-8EA5-4D90-AAFB-986249A4242D")
    IMMKey : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Open( 
            /* [in] */ BSTR keyGUID,
            /* [retval][out] */ VARIANT_BOOL *funcResult) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Close( void) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IsOpened( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Connected( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMMKeyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMMKey * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMMKey * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMMKey * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMMKey * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMMKey * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMMKey * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMMKey * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Open )( 
            IMMKey * This,
            /* [in] */ BSTR keyGUID,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            IMMKey * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsOpened )( 
            IMMKey * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Connected )( 
            IMMKey * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        END_INTERFACE
    } IMMKeyVtbl;

    interface IMMKey
    {
        CONST_VTBL struct IMMKeyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMMKey_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMMKey_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMMKey_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMMKey_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IMMKey_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IMMKey_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IMMKey_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IMMKey_Open(This,keyGUID,funcResult)	\
    (This)->lpVtbl -> Open(This,keyGUID,funcResult)

#define IMMKey_Close(This)	\
    (This)->lpVtbl -> Close(This)

#define IMMKey_get_IsOpened(This,pVal)	\
    (This)->lpVtbl -> get_IsOpened(This,pVal)

#define IMMKey_get_Connected(This,pVal)	\
    (This)->lpVtbl -> get_Connected(This,pVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IMMKey_Open_Proxy( 
    IMMKey * This,
    /* [in] */ BSTR keyGUID,
    /* [retval][out] */ VARIANT_BOOL *funcResult);


void __RPC_STUB IMMKey_Open_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IMMKey_Close_Proxy( 
    IMMKey * This);


void __RPC_STUB IMMKey_Close_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IMMKey_get_IsOpened_Proxy( 
    IMMKey * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IMMKey_get_IsOpened_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IMMKey_get_Connected_Proxy( 
    IMMKey * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IMMKey_get_Connected_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMMKey_INTERFACE_DEFINED__ */


#ifndef __IBusControl_INTERFACE_DEFINED__
#define __IBusControl_INTERFACE_DEFINED__

/* interface IBusControl */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IBusControl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E3CEE44A-0223-4703-83B6-857F3668FC93")
    IBusControl : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Open( 
            /* [in] */ BSTR deviceSerial,
            /* [in] */ BSTR deviceGUID,
            /* [in] */ DeviceOpenMode openMode,
            /* [in] */ DeviceUpdateMode updateMode,
            /* [retval][out] */ VARIANT_BOOL *funcResult) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Close( void) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IsOpened( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ unsigned char portIndex) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Update( 
            /* [in] */ unsigned char portIndex,
            /* [in] */ unsigned char inValue,
            /* [retval][out] */ unsigned char *outValue) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IBusControlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBusControl * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBusControl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBusControl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IBusControl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IBusControl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IBusControl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IBusControl * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Open )( 
            IBusControl * This,
            /* [in] */ BSTR deviceSerial,
            /* [in] */ BSTR deviceGUID,
            /* [in] */ DeviceOpenMode openMode,
            /* [in] */ DeviceUpdateMode updateMode,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            IBusControl * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsOpened )( 
            IBusControl * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IBusControl * This,
            /* [in] */ unsigned char portIndex);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Update )( 
            IBusControl * This,
            /* [in] */ unsigned char portIndex,
            /* [in] */ unsigned char inValue,
            /* [retval][out] */ unsigned char *outValue);
        
        END_INTERFACE
    } IBusControlVtbl;

    interface IBusControl
    {
        CONST_VTBL struct IBusControlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBusControl_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IBusControl_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IBusControl_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IBusControl_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IBusControl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IBusControl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IBusControl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IBusControl_Open(This,deviceSerial,deviceGUID,openMode,updateMode,funcResult)	\
    (This)->lpVtbl -> Open(This,deviceSerial,deviceGUID,openMode,updateMode,funcResult)

#define IBusControl_Close(This)	\
    (This)->lpVtbl -> Close(This)

#define IBusControl_get_IsOpened(This,pVal)	\
    (This)->lpVtbl -> get_IsOpened(This,pVal)

#define IBusControl_Initialize(This,portIndex)	\
    (This)->lpVtbl -> Initialize(This,portIndex)

#define IBusControl_Update(This,portIndex,inValue,outValue)	\
    (This)->lpVtbl -> Update(This,portIndex,inValue,outValue)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IBusControl_Open_Proxy( 
    IBusControl * This,
    /* [in] */ BSTR deviceSerial,
    /* [in] */ BSTR deviceGUID,
    /* [in] */ DeviceOpenMode openMode,
    /* [in] */ DeviceUpdateMode updateMode,
    /* [retval][out] */ VARIANT_BOOL *funcResult);


void __RPC_STUB IBusControl_Open_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IBusControl_Close_Proxy( 
    IBusControl * This);


void __RPC_STUB IBusControl_Close_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IBusControl_get_IsOpened_Proxy( 
    IBusControl * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IBusControl_get_IsOpened_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IBusControl_Initialize_Proxy( 
    IBusControl * This,
    /* [in] */ unsigned char portIndex);


void __RPC_STUB IBusControl_Initialize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IBusControl_Update_Proxy( 
    IBusControl * This,
    /* [in] */ unsigned char portIndex,
    /* [in] */ unsigned char inValue,
    /* [retval][out] */ unsigned char *outValue);


void __RPC_STUB IBusControl_Update_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IBusControl_INTERFACE_DEFINED__ */


#ifndef __IIRReceiver_INTERFACE_DEFINED__
#define __IIRReceiver_INTERFACE_DEFINED__

/* interface IIRReceiver */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IIRReceiver;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("438E1C1B-BF71-4B1F-A1E6-2303FDD0431A")
    IIRReceiver : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Open( 
            /* [in] */ BSTR deviceSerial,
            /* [in] */ BSTR deviceGUID,
            /* [in] */ DeviceOpenMode DeviceOpenMode,
            /* [retval][out] */ VARIANT_BOOL *funcResult) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Close( void) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Opened( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Connected( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Device( 
            /* [retval][out] */ IDevice **pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Device( 
            /* [in] */ IDevice *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IIRReceiverVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIRReceiver * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIRReceiver * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIRReceiver * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IIRReceiver * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IIRReceiver * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IIRReceiver * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IIRReceiver * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Open )( 
            IIRReceiver * This,
            /* [in] */ BSTR deviceSerial,
            /* [in] */ BSTR deviceGUID,
            /* [in] */ DeviceOpenMode DeviceOpenMode,
            /* [retval][out] */ VARIANT_BOOL *funcResult);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            IIRReceiver * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Opened )( 
            IIRReceiver * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Connected )( 
            IIRReceiver * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Device )( 
            IIRReceiver * This,
            /* [retval][out] */ IDevice **pVal);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Device )( 
            IIRReceiver * This,
            /* [in] */ IDevice *pVal);
        
        END_INTERFACE
    } IIRReceiverVtbl;

    interface IIRReceiver
    {
        CONST_VTBL struct IIRReceiverVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIRReceiver_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IIRReceiver_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IIRReceiver_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IIRReceiver_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IIRReceiver_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IIRReceiver_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IIRReceiver_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IIRReceiver_Open(This,deviceSerial,deviceGUID,DeviceOpenMode,funcResult)	\
    (This)->lpVtbl -> Open(This,deviceSerial,deviceGUID,DeviceOpenMode,funcResult)

#define IIRReceiver_Close(This)	\
    (This)->lpVtbl -> Close(This)

#define IIRReceiver_get_Opened(This,pVal)	\
    (This)->lpVtbl -> get_Opened(This,pVal)

#define IIRReceiver_get_Connected(This,pVal)	\
    (This)->lpVtbl -> get_Connected(This,pVal)

#define IIRReceiver_get_Device(This,pVal)	\
    (This)->lpVtbl -> get_Device(This,pVal)

#define IIRReceiver_put_Device(This,pVal)	\
    (This)->lpVtbl -> put_Device(This,pVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IIRReceiver_Open_Proxy( 
    IIRReceiver * This,
    /* [in] */ BSTR deviceSerial,
    /* [in] */ BSTR deviceGUID,
    /* [in] */ DeviceOpenMode DeviceOpenMode,
    /* [retval][out] */ VARIANT_BOOL *funcResult);


void __RPC_STUB IIRReceiver_Open_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IIRReceiver_Close_Proxy( 
    IIRReceiver * This);


void __RPC_STUB IIRReceiver_Close_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IIRReceiver_get_Opened_Proxy( 
    IIRReceiver * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IIRReceiver_get_Opened_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IIRReceiver_get_Connected_Proxy( 
    IIRReceiver * This,
    /* [retval][out] */ VARIANT_BOOL *pVal);


void __RPC_STUB IIRReceiver_get_Connected_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IIRReceiver_get_Device_Proxy( 
    IIRReceiver * This,
    /* [retval][out] */ IDevice **pVal);


void __RPC_STUB IIRReceiver_get_Device_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE IIRReceiver_put_Device_Proxy( 
    IIRReceiver * This,
    /* [in] */ IDevice *pVal);


void __RPC_STUB IIRReceiver_put_Device_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IIRReceiver_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_CoDiscoAPI;

#ifdef __cplusplus

class DECLSPEC_UUID("91AEAEB1-CB8B-4BAE-8300-14C6F73A6D89")
CoDiscoAPI;
#endif

EXTERN_C const CLSID CLSID_CoDiscoSynchronizerAPI;

#ifdef __cplusplus

class DECLSPEC_UUID("10F271AD-D03D-4A0D-A72D-89532C2FD62F")
CoDiscoSynchronizerAPI;
#endif

EXTERN_C const CLSID CLSID_CoDiscoLoaderAPI;

#ifdef __cplusplus

class DECLSPEC_UUID("8D5B3222-2F10-4E48-94B2-19D821E0E6C3")
CoDiscoLoaderAPI;
#endif

EXTERN_C const CLSID CLSID_Multiscope;

#ifdef __cplusplus

class DECLSPEC_UUID("98FF8CF9-1AA7-4E99-AA8D-4AF8CFC18673")
Multiscope;
#endif

EXTERN_C const CLSID CLSID_CoMMKey;

#ifdef __cplusplus

class DECLSPEC_UUID("C260BD7B-F583-41E1-8D06-7723D30F0EED")
CoMMKey;
#endif

EXTERN_C const CLSID CLSID_CoBusControl;

#ifdef __cplusplus

class DECLSPEC_UUID("627CB2BE-A222-44FC-A5FE-7076CA43589F")
CoBusControl;
#endif

EXTERN_C const CLSID CLSID_CoIRReceiver;

#ifdef __cplusplus

class DECLSPEC_UUID("6478F218-0726-44BC-8ABB-5B76E7C040D2")
CoIRReceiver;
#endif
#endif /* __DiscoAPILib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


