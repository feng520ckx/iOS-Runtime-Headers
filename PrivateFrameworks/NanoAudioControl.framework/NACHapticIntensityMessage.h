/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

@interface NACHapticIntensityMessage : PBCodable <NSCopying> {
    struct { 
        unsigned int intensity : 1; 
    } _has;
    float _intensity;
}

@property BOOL hasIntensity;
@property float intensity;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasIntensity;
- (unsigned int)hash;
- (float)intensity;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasIntensity:(BOOL)arg1;
- (void)setIntensity:(float)arg1;
- (void)writeTo:(id)arg1;

@end