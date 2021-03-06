/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMessagePayload : NSObject <NSSecureCoding> {
    NSURL * _URL;
    NSString * _accessibilityLabel;
    NSString * _changeSummaryText;
    UIImage * _image;
    NSURL * _mediaURL;
    NSUUID * _sessionIdentifier;
    NSString * _statusText;
    NSString * _text;
}

@property (nonatomic, retain) NSURL *URL;
@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic, copy) NSString *changeSummaryText;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) NSURL *mediaURL;
@property (nonatomic, readonly, copy) NSUUID *sessionIdentifier;
@property (nonatomic, copy) NSString *statusText;
@property (nonatomic, copy) NSString *text;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (id)accessibilityLabel;
- (id)changeSummaryText;
- (void)encodeWithCoder:(id)arg1;
- (id)image;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionIdentifier:(id)arg1;
- (id)mediaURL;
- (id)sessionIdentifier;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setChangeSummaryText:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setMediaURL:(id)arg1;
- (void)setStatusText:(id)arg1;
- (void)setText:(id)arg1;
- (void)setURL:(id)arg1;
- (id)statusText;
- (id)text;

@end
