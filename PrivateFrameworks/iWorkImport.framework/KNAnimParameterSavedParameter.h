/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNAnimParameterSavedParameter : NSObject <NSCoding> {
    BOOL  _debugOnly;
    float  _doubleValue;
    BOOL  _hasMaxValue;
    BOOL  _hasMinValue;
    float  _maxValue;
    float  _minValue;
    NSString * _name;
    NSString * _parameterDescription;
    TSUBezierPath * _pathValue;
    BOOL  _removed;
    unsigned int  _type;
}

@property (nonatomic) BOOL debugOnly;
@property (nonatomic) float doubleValue;
@property (nonatomic) BOOL hasMaxValue;
@property (nonatomic) BOOL hasMinValue;
@property (nonatomic) float maxValue;
@property (nonatomic) float minValue;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *parameterDescription;
@property (nonatomic, retain) TSUBezierPath *pathValue;
@property (nonatomic) BOOL removed;
@property (nonatomic) unsigned int type;

- (void)dealloc;
- (BOOL)debugOnly;
- (float)doubleValue;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasMaxValue;
- (BOOL)hasMinValue;
- (id)initWithCoder:(id)arg1;
- (float)maxValue;
- (float)minValue;
- (id)name;
- (id)p_bezierPathFromSavedPathElements:(id)arg1;
- (id)p_savedPathFromPath:(id)arg1;
- (id)parameterDescription;
- (id)pathValue;
- (BOOL)removed;
- (void)setDebugOnly:(BOOL)arg1;
- (void)setDoubleValue:(float)arg1;
- (void)setHasMaxValue:(BOOL)arg1;
- (void)setHasMinValue:(BOOL)arg1;
- (void)setMaxValue:(float)arg1;
- (void)setMinValue:(float)arg1;
- (void)setName:(id)arg1;
- (void)setParameterDescription:(id)arg1;
- (void)setPathValue:(id)arg1;
- (void)setRemoved:(BOOL)arg1;
- (void)setType:(unsigned int)arg1;
- (unsigned int)type;

@end
