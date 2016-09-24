/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFURLLabelAccessoryItem : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  _interpolatedSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    double  _spacing;
    struct CGSize { 
        double width; 
        double height; 
    }  _squishedSize;
    double  _squishedSpacing;
    double  _verticalOffset;
    SFCrossfadingImageView * _view;
}

@property (nonatomic) struct CGSize { double x1; double x2; } interpolatedSize;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic) double spacing;
@property (nonatomic) struct CGSize { double x1; double x2; } squishedSize;
@property (nonatomic) double squishedSpacing;
@property (nonatomic) double verticalOffset;
@property (nonatomic, retain) SFCrossfadingImageView *view;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })interpolatedSize;
- (void)setInterpolatedSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSpacing:(float)arg1;
- (void)setSquishedSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSquishedSpacing:(float)arg1;
- (void)setVerticalOffset:(float)arg1;
- (void)setView:(id)arg1;
- (struct CGSize { double x1; double x2; })size;
- (float)spacing;
- (struct CGSize { double x1; double x2; })squishedSize;
- (float)squishedSpacing;
- (float)verticalOffset;
- (id)view;

@end