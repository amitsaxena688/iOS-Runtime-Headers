/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@class CLLocation, GEOPlaceResult, NSArray, NSDate, NSUUID;

@interface RTLocationOfInterest : NSObject <NSCopying, NSSecureCoding> {
    NSUUID *_identifier;
    CLLocation *_location;
    NSDate *_nextEntryTime;
    GEOPlaceResult *_placeResult;
    int _type;
    NSArray *_visits;
}

@property(readonly) NSUUID * identifier;
@property(readonly) CLLocation * location;
@property(readonly) NSDate * nextEntryTime;
@property(readonly) GEOPlaceResult * placeResult;
@property(readonly) int type;
@property(readonly) NSArray * visits;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (int)frequencyCompare:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocation:(id)arg1 identifier:(id)arg2 type:(int)arg3 placeResult:(id)arg4 nextEntryTime:(id)arg5 visits:(id)arg6;
- (BOOL)isEqual:(id)arg1;
- (id)localizedAllVisitsDescription;
- (id)localizedLastVisitDescription;
- (id)location;
- (id)name;
- (id)nextEntryTime;
- (id)placeResult;
- (int)recentCompare:(id)arg1;
- (id)relativeNameToPlaceResult:(id)arg1;
- (int)type;
- (id)visits;

@end
