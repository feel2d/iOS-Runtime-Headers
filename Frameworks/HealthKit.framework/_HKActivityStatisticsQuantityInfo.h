/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKActivityStatisticsQuantityInfo : NSObject <NSSecureCoding> {
    NSDate * _endDate;
    HKQuantity * _quantityValue;
    NSDate * _startDate;
}

@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic, retain) HKQuantity *quantityValue;
@property (nonatomic, retain) NSDate *startDate;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)quantityValue;
- (void)setEndDate:(id)arg1;
- (void)setQuantityValue:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;

@end
