/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOABConfigValue : PBCodable <NSCopying> {
    BOOL  _boolValue;
    double  _doubleValue;
    struct { 
        unsigned int doubleValue : 1; 
        unsigned int intValue : 1; 
        unsigned int boolValue : 1; 
    }  _has;
    long long  _intValue;
    NSString * _stringValue;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) BOOL boolValue;
@property (nonatomic) double doubleValue;
@property (nonatomic) BOOL hasBoolValue;
@property (nonatomic) BOOL hasDoubleValue;
@property (nonatomic) BOOL hasIntValue;
@property (nonatomic, readonly) BOOL hasStringValue;
@property (nonatomic) long long intValue;
@property (nonatomic, retain) NSString *stringValue;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (BOOL)boolValue;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (double)doubleValue;
- (BOOL)hasBoolValue;
- (BOOL)hasDoubleValue;
- (BOOL)hasIntValue;
- (BOOL)hasStringValue;
- (unsigned int)hash;
- (long long)intValue;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setBoolValue:(BOOL)arg1;
- (void)setDoubleValue:(double)arg1;
- (void)setHasBoolValue:(BOOL)arg1;
- (void)setHasDoubleValue:(BOOL)arg1;
- (void)setHasIntValue:(BOOL)arg1;
- (void)setIntValue:(long long)arg1;
- (void)setStringValue:(id)arg1;
- (id)stringValue;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
