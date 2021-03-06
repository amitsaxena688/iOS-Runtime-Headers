/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class IMHandle, NSAttributedString, NSString, UIImage;

@interface CKEntity : NSObject <CKTranscriptDataRowObject> {
    IMHandle *_handle;
}

@property(readonly) void* abRecord;
@property(readonly) NSAttributedString * attributedTranscriptText;
@property(readonly) IMHandle * defaultIMHandle;
@property(readonly) NSString * fullName;
@property(retain) IMHandle * handle;
@property(readonly) int identifier;
@property(readonly) NSString * name;
@property(readonly) NSString * originalAddress;
@property(readonly) int propertyType;
@property(readonly) NSString * rawAddress;
@property(readonly) NSString * textToneIdentifier;
@property(readonly) NSString * textVibrationIdentifier;
@property(readonly) UIImage * transcriptContactImage;

+ (id)_copyEntityForAddressString:(id)arg1 onAccount:(id)arg2;
+ (id)copyEntityForAddressString:(id)arg1;

- (Class)__ck_displayCellClass;
- (id)__ck_displayCellIdentifier;
- (id)__ck_displayContactImage;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })__ck_displayContentAlignmentInsets;
- (BOOL)__ck_displayDuringSend;
- (id)__ck_displayGUIDWithMessage:(id)arg1;
- (struct CGSize { float x1; float x2; })__ck_displaySize:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; }*)arg1;
- (BOOL)__ck_displayTranscriptOrientation;
- (void)__ck_prewarmForDisplay;
- (BOOL)__ck_transcriptUsesTextAlignmentInsets;
- (BOOL)__ck_wantsDrawerLayout;
- (void*)abRecord;
- (id)attributedTranscriptText;
- (void)dealloc;
- (id)defaultIMHandle;
- (id)description;
- (id)fullName;
- (id)handle;
- (unsigned int)hash;
- (int)identifier;
- (id)initWithIMHandle:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)name;
- (id)originalAddress;
- (id)personViewControllerWithDelegate:(id)arg1;
- (int)propertyType;
- (id)rawAddress;
- (void)setHandle:(id)arg1;
- (id)textToneIdentifier;
- (id)textVibrationIdentifier;
- (id)transcriptContactImage;

@end
