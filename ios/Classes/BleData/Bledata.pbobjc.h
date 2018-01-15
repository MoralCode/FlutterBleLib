// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: bledata.proto

// This CPP symbol can be defined to use imports that match up to the framework
// imports needed when using CocoaPods.
#if !defined(GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS)
 #define GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS 0
#endif

#if GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <Protobuf/GPBProtocolBuffers.h>
#else
 #import "GPBProtocolBuffers.h"
#endif

#if GOOGLE_PROTOBUF_OBJC_VERSION < 30002
#error This file was generated by a newer version of protoc which is incompatible with your Protocol Buffer library sources.
#endif
#if 30002 < GOOGLE_PROTOBUF_OBJC_MIN_SUPPORTED_VERSION
#error This file was generated by an older version of protoc which is incompatible with your Protocol Buffer library sources.
#endif

// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

CF_EXTERN_C_BEGIN

@class BleDataBleDeviceMessage;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - Enum BleDataLogLevelMessage

typedef GPB_ENUM(BleDataLogLevelMessage) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  BleDataLogLevelMessage_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  BleDataLogLevelMessage_Verbose = 0,
  BleDataLogLevelMessage_Debug = 1,
  BleDataLogLevelMessage_Info = 2,
  BleDataLogLevelMessage_Warning = 3,
  BleDataLogLevelMessage_Error = 4,
  BleDataLogLevelMessage_None = 5,
};

GPBEnumDescriptor *BleDataLogLevelMessage_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL BleDataLogLevelMessage_IsValidValue(int32_t value);

#pragma mark - Enum BleDataBluetoothStateMessage

typedef GPB_ENUM(BleDataBluetoothStateMessage) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  BleDataBluetoothStateMessage_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  BleDataBluetoothStateMessage_Unknown = 0,
  BleDataBluetoothStateMessage_Resetting = 1,
  BleDataBluetoothStateMessage_Unsupported = 2,
  BleDataBluetoothStateMessage_Unauthorized = 3,
  BleDataBluetoothStateMessage_PoweredOff = 4,
  BleDataBluetoothStateMessage_PoweredOn = 5,
};

GPBEnumDescriptor *BleDataBluetoothStateMessage_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL BleDataBluetoothStateMessage_IsValidValue(int32_t value);

#pragma mark - BleDataBledataRoot

/**
 * Exposes the extension registry for this file.
 *
 * The base class provides:
 * @code
 *   + (GPBExtensionRegistry *)extensionRegistry;
 * @endcode
 * which is a @c GPBExtensionRegistry that includes all the extensions defined by
 * this file and all files that it depends on.
 **/
@interface BleDataBledataRoot : GPBRootObject
@end

#pragma mark - BleDataScanSettingsMessage

typedef GPB_ENUM(BleDataScanSettingsMessage_FieldNumber) {
  BleDataScanSettingsMessage_FieldNumber_ScanMode = 1,
  BleDataScanSettingsMessage_FieldNumber_CallbackType = 2,
};

@interface BleDataScanSettingsMessage : GPBMessage

@property(nonatomic, readwrite) int32_t scanMode;

/**
 * TODO for this moment they are hidden in
 *    uint64 reportDelayMillis = 3;
 *    int32 matchMode = 4;
 *    int32 numOfMatchesPerFilter = 5;
 **/
@property(nonatomic, readwrite) int32_t callbackType;

@end

#pragma mark - BleDataScanFilterMessage

typedef GPB_ENUM(BleDataScanFilterMessage_FieldNumber) {
  BleDataScanFilterMessage_FieldNumber_DeviceName = 1,
  BleDataScanFilterMessage_FieldNumber_DeviceAddress = 2,
  BleDataScanFilterMessage_FieldNumber_ServiceUuid = 3,
  BleDataScanFilterMessage_FieldNumber_ServiceUuidMask = 4,
  BleDataScanFilterMessage_FieldNumber_ServiceDataUuid = 5,
  BleDataScanFilterMessage_FieldNumber_ServiceData = 6,
  BleDataScanFilterMessage_FieldNumber_ServiceDataMask = 7,
  BleDataScanFilterMessage_FieldNumber_ManufacturerId = 8,
  BleDataScanFilterMessage_FieldNumber_ManufacturerData = 9,
  BleDataScanFilterMessage_FieldNumber_ManufacturerDataMask = 10,
};

@interface BleDataScanFilterMessage : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *deviceName;

@property(nonatomic, readwrite, copy, null_resettable) NSString *deviceAddress;

@property(nonatomic, readwrite, copy, null_resettable) NSString *serviceUuid;

@property(nonatomic, readwrite, copy, null_resettable) NSString *serviceUuidMask;

@property(nonatomic, readwrite, copy, null_resettable) NSString *serviceDataUuid;

@property(nonatomic, readwrite, copy, null_resettable) NSData *serviceData;

@property(nonatomic, readwrite, copy, null_resettable) NSData *serviceDataMask;

@property(nonatomic, readwrite) int32_t manufacturerId;

@property(nonatomic, readwrite, copy, null_resettable) NSData *manufacturerData;

@property(nonatomic, readwrite, copy, null_resettable) NSData *manufacturerDataMask;

@end

#pragma mark - BleDataBleDeviceMessage

typedef GPB_ENUM(BleDataBleDeviceMessage_FieldNumber) {
  BleDataBleDeviceMessage_FieldNumber_MacAddress = 1,
  BleDataBleDeviceMessage_FieldNumber_Name = 2,
  BleDataBleDeviceMessage_FieldNumber_Rssi = 3,
  BleDataBleDeviceMessage_FieldNumber_Mtu = 4,
};

@interface BleDataBleDeviceMessage : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *macAddress;

@property(nonatomic, readwrite, copy, null_resettable) NSString *name;

@property(nonatomic, readwrite) int32_t rssi;

@property(nonatomic, readwrite) int32_t mtu;

@end

#pragma mark - BleDataScanResultMessage

typedef GPB_ENUM(BleDataScanResultMessage_FieldNumber) {
  BleDataScanResultMessage_FieldNumber_BleDeviceMessage = 1,
  BleDataScanResultMessage_FieldNumber_Rssi = 2,
  BleDataScanResultMessage_FieldNumber_TimestampNanos = 3,
  BleDataScanResultMessage_FieldNumber_ScanCallbackTypeMessage = 4,
};

@interface BleDataScanResultMessage : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) BleDataBleDeviceMessage *bleDeviceMessage;
/** Test to see if @c bleDeviceMessage has been set. */
@property(nonatomic, readwrite) BOOL hasBleDeviceMessage;

@property(nonatomic, readwrite) int32_t rssi;

@property(nonatomic, readwrite) uint64_t timestampNanos;

@property(nonatomic, readwrite) int32_t scanCallbackTypeMessage;

@end

#pragma mark - BleDataConnectToDeviceDataMessage

typedef GPB_ENUM(BleDataConnectToDeviceDataMessage_FieldNumber) {
  BleDataConnectToDeviceDataMessage_FieldNumber_MacAddress = 1,
  BleDataConnectToDeviceDataMessage_FieldNumber_IsAutoConnect = 2,
  BleDataConnectToDeviceDataMessage_FieldNumber_RequestMtu = 3,
};

@interface BleDataConnectToDeviceDataMessage : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *macAddress;

@property(nonatomic, readwrite) BOOL isAutoConnect;

@property(nonatomic, readwrite) int32_t requestMtu;

@end

#pragma mark - BleDataSimpleTransactionMessage

typedef GPB_ENUM(BleDataSimpleTransactionMessage_FieldNumber) {
  BleDataSimpleTransactionMessage_FieldNumber_TransactionId = 1,
};

@interface BleDataSimpleTransactionMessage : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *transactionId;

@end

#pragma mark - BleDataRequestMtuTransactionMessage

typedef GPB_ENUM(BleDataRequestMtuTransactionMessage_FieldNumber) {
  BleDataRequestMtuTransactionMessage_FieldNumber_TransactionId = 1,
  BleDataRequestMtuTransactionMessage_FieldNumber_MacAddress = 2,
  BleDataRequestMtuTransactionMessage_FieldNumber_Mtu = 3,
};

@interface BleDataRequestMtuTransactionMessage : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *transactionId;

@property(nonatomic, readwrite, copy, null_resettable) NSString *macAddress;

@property(nonatomic, readwrite) int32_t mtu;

@end

#pragma mark - BleDataReadRSSIForDeviceMessage

typedef GPB_ENUM(BleDataReadRSSIForDeviceMessage_FieldNumber) {
  BleDataReadRSSIForDeviceMessage_FieldNumber_TransactionId = 1,
  BleDataReadRSSIForDeviceMessage_FieldNumber_MacAddress = 2,
};

@interface BleDataReadRSSIForDeviceMessage : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *transactionId;

@property(nonatomic, readwrite, copy, null_resettable) NSString *macAddress;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
