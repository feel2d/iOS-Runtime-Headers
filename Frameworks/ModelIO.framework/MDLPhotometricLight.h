/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

@interface MDLPhotometricLight : MDLPhysicallyPlausibleLight {
    struct RTIESLight { int (**x1)(); struct CGColor {} *x2; id x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; struct IESData { int x_11_1_1; int x_11_1_2; struct vector<float, std::__1::allocator<float> > { double *x_3_2_1; double *x_3_2_2; struct __compressed_pair<double *, std::__1::allocator<float> > { double *x_3_3_1; } x_3_2_3; } x_11_1_3; struct vector<float, std::__1::allocator<float> > { double *x_4_2_1; double *x_4_2_2; struct __compressed_pair<double *, std::__1::allocator<float> > { double *x_3_3_1; } x_4_2_3; } x_11_1_4; struct vector<float, std::__1::allocator<float> > { double *x_5_2_1; double *x_5_2_2; struct __compressed_pair<double *, std::__1::allocator<float> > { double *x_3_3_1; } x_5_2_3; } x_11_1_5; double x_11_1_6; double x_11_1_7; double x_11_1_8; } x11; double x12; } * _iesLight;
    MDLTexture * _lightCubeMap;
    NSMutableData * _sphericalHarmonicsCoefficients;
    unsigned int  _sphericalHarmonicsLevel;
}

@property (nonatomic, readonly, retain) MDLTexture *lightCubeMap;
@property (nonatomic, readonly, copy) NSData *sphericalHarmonicsCoefficients;
@property (nonatomic, readonly) unsigned int sphericalHarmonicsLevel;

- (void).cxx_destruct;
- (float)computeInnerAngle;
- (void)computeLumens;
- (id)computeSceneKitRenderingTexture:(unsigned int)arg1;
- (struct CGColor { }*)evaluatedColorFromSHVector;
- (void)generateCubemapFromLight:(unsigned int)arg1;
- (void)generateSphericalHarmonicsFromLight:(unsigned int)arg1;
- (id)initWithIESProfile:(id)arg1;
- (id)lightCubeMap;
- (void)setSphericalHarmonicsCoefficients:(id)arg1;
- (id)sphericalHarmonicsCoefficients;
- (unsigned int)sphericalHarmonicsLevel;

@end