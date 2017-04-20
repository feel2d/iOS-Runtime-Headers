/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
 */

@interface FMDGenericAccessory : NSObject <FMDAccessory, FMDAudioAccessory, NSSecureCoding> {
    NSString * _accessoryIdentifier;
    NSString * _audioRoutingIdentifier;
    NSURL * _audioURL;
    unsigned int  _deviceProductId;
    unsigned int  _deviceVendor;
}

@property (nonatomic, retain) NSString *accessoryIdentifier;
@property (nonatomic, retain) NSString *audioRoutingIdentifier;
@property (nonatomic, retain) NSURL *audioURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int deviceProductId;
@property (nonatomic) unsigned int deviceVendor;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL playingSound;
@property (readonly) Class superclass;

+ (id)copyAccessory:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessoryIdentifier;
- (id)audioRoutingIdentifier;
- (id)audioURL;
- (id)description;
- (unsigned int)deviceProductId;
- (unsigned int)deviceVendor;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAccessory:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)playingSound;
- (void)setAccessoryIdentifier:(id)arg1;
- (void)setAudioRoutingIdentifier:(id)arg1;
- (void)setAudioURL:(id)arg1;
- (void)setDeviceProductId:(unsigned int)arg1;
- (void)setDeviceVendor:(unsigned int)arg1;

@end