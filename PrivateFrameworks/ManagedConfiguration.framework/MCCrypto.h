/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */



@interface MCCrypto : NSObject 
{
}

+ (struct __SecCertificate { }*)copyCertificateRefFromPKCS1Data:(id)arg1;
+ (BOOL)isValidPKCS12Data:(id)arg1;
+ (id)_decryptionFailedError;
+ (struct __SecCertificate { }*)copyCertificateRefFromPEMData:(id)arg1;
+ (id)objectFromEncryptedData:(id)arg1 outCertificate:(struct __SecCertificate {}**)arg2 outError:(id*)arg3;


@end