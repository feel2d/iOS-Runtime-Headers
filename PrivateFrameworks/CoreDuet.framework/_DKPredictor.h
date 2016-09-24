/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKPredictor : NSObject {
    <_DKKnowledgeQuerying> * _knowledgeStore;
}

@property (nonatomic, retain) <_DKKnowledgeQuerying> *knowledgeStore;

+ (id)predictorWithKnowledgeStore:(id)arg1;

- (void).cxx_destruct;
- (id)deviceActivityLikelihood;
- (id)initWithKnowledgeStore:(id)arg1;
- (id)knowledgeStore;
- (id)launchLikelihoodForTopNApplications:(int)arg1 withLikelihoodGreaterThan:(double)arg2 withTemporalResolution:(int)arg3;
- (id)launchLikelihoodPredictionForApp:(id)arg1;
- (id)pluginLikelihood;
- (id)predictionForStreamWithName:(id)arg1 withPredicate:(id)arg2 withPredictionType:(unsigned int)arg3;
- (void)setKnowledgeStore:(id)arg1;

@end