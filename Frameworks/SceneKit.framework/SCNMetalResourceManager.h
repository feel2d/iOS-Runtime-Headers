/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNMetalResourceManager : NSObject <SCNResourceManager> {
    struct __C3DEngineStats { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; double x25; double x26; double x27; double x28; double x29; double x30; double x31; double x32; double x33; double x34; double x35; double x36; double x37; double x38; unsigned int x39; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; unsigned int x45; unsigned int x46; unsigned int x47; unsigned int x48; unsigned int x49; unsigned int x50; unsigned int x51; unsigned int x52; unsigned int x53; unsigned int x54; double x55; double x56; double x57; double x58[60]; unsigned int x59; double x60; double x61; } * __engineStats;
    struct { 
        NSMapTable *registry; 
        NSObject<OS_dispatch_semaphore> *lock; 
    }  _availableBuffers;
    struct { 
        NSMapTable *registry; 
        NSObject<OS_dispatch_semaphore> *lock; 
    }  _availableComputePipelines;
    struct { 
        NSMapTable *registry; 
        NSObject<OS_dispatch_semaphore> *lock; 
    }  _availableImageProxy;
    struct { 
        NSMapTable *registry; 
        NSObject<OS_dispatch_semaphore> *lock; 
    }  _availableImages;
    struct { 
        NSMapTable *registry; 
        NSObject<OS_dispatch_semaphore> *lock; 
    }  _availableIrradianceTextures;
    struct { 
        NSMapTable *registry; 
        NSObject<OS_dispatch_semaphore> *lock; 
    }  _availableMeshElements;
    struct { 
        NSMapTable *registry; 
        NSObject<OS_dispatch_semaphore> *lock; 
    }  _availableMeshSources;
    struct { 
        NSMapTable *registry; 
        NSObject<OS_dispatch_semaphore> *lock; 
    }  _availableMeshes;
    struct { 
        NSMapTable *registry; 
        NSObject<OS_dispatch_semaphore> *lock; 
    }  _availableMorphs;
    struct { 
        NSMapTable *registry; 
        NSObject<OS_dispatch_semaphore> *lock; 
    }  _availableRadianceTextures;
    struct { 
        NSMapTable *registry; 
        NSObject<OS_dispatch_semaphore> *lock; 
    }  _availableRasterizerStates;
    struct { 
        NSMapTable *registry; 
        NSObject<OS_dispatch_semaphore> *lock; 
    }  _availableSamplers;
    struct { 
        NSMapTable *registry; 
        NSObject<OS_dispatch_semaphore> *lock; 
    }  _availableShadables;
    SCNMTLShadableKey * _availableShadablesSearchKey;
    NSMutableArray * _availableShaderManagers;
    SCNMTLBufferAllocator * _commonProfileBuffersAllocator;
    <MTLTexture> * _defaultCubeTexture;
    <MTLTexture> * _defaultTexture;
    <MTLTexture> * _defaultTexture3D;
    <MTLDevice> * _device;
    SCNMetalLibraryManager * _libraryManager;
    MTKTextureLoader * _mtkTextureLoader;
    <MTLCommandQueue> * _resourceQueue;
    NSObject<OS_dispatch_semaphore> * _shaderManagerLock;
    <MTLTexture> * _specularDFGTexture;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <MTLDevice> *device;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) SCNMetalLibraryManager *libraryManager;
@property (readonly) Class superclass;

+ (id)resourceManagerForDevice:(id)arg1;
+ (void)unregisterManagerForDevice:(id)arg1;

- (void)__updateMutableMesh:(struct __C3DMesh { }*)arg1 withMetalMesh:(id)arg2;
- (void)_bakeSphericalHamonicsBasedIrradianceTexture:(id)arg1 forEnvironmentTexture:(id)arg2;
- (void)_bakeStochasticIrradianceTexture:(id)arg1 forEnvironmentTexture:(id)arg2 mipmapLevelForSampling:(unsigned int)arg3 useTextureView:(BOOL)arg4;
- (id)_bufferForData:(struct __CFData { }*)arg1 bytesPerIndex:(unsigned long)arg2;
- (void)_enqueueMipmapGenerationForTexture:(id)arg1;
- (id)_fillTexture:(id)arg1 withImage:(struct __C3DImage { }*)arg2 needsMipMap:(BOOL)arg3 textureOptions:(long)arg4;
- (void)_geometryWillDie:(id)arg1;
- (void)_imageProxyWillDie:(id)arg1;
- (void)_imageWillDie:(id)arg1;
- (void)_materialWillDie:(id)arg1;
- (void)_meshElementWillDie:(id)arg1;
- (void)_meshSourceWillDie:(id)arg1;
- (void)_meshWillDie:(id)arg1;
- (void)_morphWillDie:(id)arg1;
- (id)_newTextureWithDescriptor:(id)arg1;
- (void)_passWillDie:(id)arg1;
- (void)_programWillDie:(id)arg1;
- (id)computePipelineStateForKernel:(id)arg1;
- (id)convertTextureToCubeMapIfApplicable:(id)arg1 needsMipmap:(BOOL)arg2;
- (id)cubemapTextureForLatlongTexture:(id)arg1 pixelFormat:(unsigned int)arg2 needsMipmap:(BOOL)arg3;
- (void)dealloc;
- (id)defaultCubeTexture;
- (id)defaultTexture;
- (id)defaultTexture3D;
- (id)device;
- (void)dispatchForCubemap:(id)arg1 computeEncoder:(id)arg2 pipelineState:(id)arg3;
- (void)dispatchForTexture:(id)arg1 computeEncoder:(id)arg2 pipelineState:(id)arg3;
- (void)flush;
- (id)initWithDevice:(id)arg1;
- (id)irradianceTextureForEnvironmentTexture:(id)arg1;
- (id)latlongTextureForCubemap:(id)arg1 pixelFormat:(unsigned int)arg2 needsMipmap:(BOOL)arg3;
- (id)libraryManager;
- (id)newConstantBufferWithLength:(unsigned int)arg1 options:(unsigned int)arg2;
- (id)newRenderPipelineStateWithPixelFormat:(unsigned int)arg1 vertexFunctionName:(id)arg2 fragmentFunctionName:(id)arg3 library:(id)arg4;
- (id)newRenderPipelineStateWithPixelFormat:(unsigned int)arg1 vertexFunctionName:(id)arg2 fragmentFunctionName:(id)arg3 library:(id)arg4 vertexConstantValues:(id)arg5 fragmentConstantValues:(id)arg6;
- (id)radianceTextureForEnvironmentTexture:(id)arg1;
- (void)removeAllShaders;
- (id)renderResourceForImage:(struct __C3DImage { }*)arg1 sampler:(struct __C3DTextureSampler { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; int x2; int x3; int x4; int x5; int x6; int x7; struct C3DColor4 { union { double x_1_2_1[4]; struct { double x_2_3_1; double x_2_3_2; double x_2_3_3; double x_2_3_4; } x_1_2_2; } x_8_1_1; } x8; double x9; unsigned char x10; int x11; unsigned int x12; }*)arg2 options:(long)arg3;
- (id)renderResourceForImageProxy:(struct __C3DImageProxy { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct { int (*x_2_1_1)(); int (*x_2_1_2)(); int (*x_2_1_3)(); } x2; void *x3; }*)arg1 sampler:(struct __C3DTextureSampler { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; int x2; int x3; int x4; int x5; int x6; int x7; struct C3DColor4 { union { double x_1_2_1[4]; struct { double x_2_3_1; double x_2_3_2; double x_2_3_3; double x_2_3_4; } x_1_2_2; } x_8_1_1; } x8; double x9; unsigned char x10; int x11; unsigned int x12; }*)arg2 engineContext:(struct __C3DEngineContext { }*)arg3;
- (id)renderResourceForMaterial:(struct __C3DMaterial { }*)arg1 geometry:(struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned int x_1_2_1; unsigned char x_1_2_2[4]; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; int x_1_1_6; int x_1_1_7; } x1; struct __C3DMesh {} *x2; struct __C3DMaterial {} *x3; struct __CFArray {} *x4; struct __CFSet {} *x5; struct __CFArray {} *x6; struct __C3DAABB {} *x7; unsigned int x8 : 1; int (*x9)(); struct { unsigned short x_10_1_1; struct { bool x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; } x_10_1_2; struct __C3DMeshElement {} *x_10_1_3; struct __C3DMeshSource {} *x_10_1_4; struct __C3DMesh {} *x_10_1_5; } x10; }*)arg2 renderPipeline:(id)arg3 engineContext:(struct __C3DEngineContext { }*)arg4;
- (id)renderResourceForMesh:(struct __C3DMesh { }*)arg1;
- (id)renderResourceForMeshElement:(struct __C3DMeshElement { struct __C3DEntity { struct __CFRuntimeBase { unsigned int x_1_2_1; unsigned char x_1_2_2[4]; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; int x_1_1_6; int x_1_1_7; } x1; unsigned int x2; unsigned int x3; struct __C3DMeshElement {} *x4; unsigned char x5; unsigned char x6; unsigned char x7; struct { BOOL x_8_1_1; struct __CFData {} *x_8_1_2; unsigned int x_8_1_3; } x8; struct { BOOL x_9_1_1; struct __CFData {} *x_9_1_2; unsigned int x_9_1_3; } x9; void *x10; struct __C3DMeshSource {} *x11; /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x12[2]; }*)arg1;
- (id)renderResourceForMeshSource:(struct __C3DMeshSource { struct __C3DGenericSource { struct __C3DEntity { struct __CFRuntimeBase { unsigned int x_1_3_1; unsigned char x_1_3_2[4]; } x_1_2_1; void *x_1_2_2; struct __CFString {} *x_1_2_3; struct __CFString {} *x_1_2_4; struct __CFDictionary {} *x_1_2_5; int x_1_2_6; int x_1_2_7; } x_1_1_1; struct __C3DSourceAccessor {} *x_1_1_2; union { struct __CFData {} *x_3_2_1; void *x_3_2_2; void *x_3_2_3; } x_1_1_3; int x_1_1_4; unsigned int x_1_1_5 : 1; unsigned int x_1_1_6 : 1; unsigned int x_1_1_7 : 1; } x1; unsigned short x2; unsigned char x3; unsigned char x4; }*)arg1;
- (id)renderResourceForMorph:(struct __C3DMorph { }*)arg1 baseMesh:(struct __C3DMesh { }*)arg2;
- (id)renderResourceForRasterizerState:(struct __C3DRasterizerStates { }*)arg1;
- (id)renderResourceForSampler:(struct __C3DTextureSampler { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; int x2; int x3; int x4; int x5; int x6; int x7; struct C3DColor4 { union { double x_1_2_1[4]; struct { double x_2_3_1; double x_2_3_2; double x_2_3_3; double x_2_3_4; } x_1_2_2; } x_8_1_1; } x8; double x9; unsigned char x10; int x11; unsigned int x12; }*)arg1;
- (id)renderResourcesForEffectSlot:(struct __C3DEffectSlot { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct C3DColor4 { union { double x_1_2_1[4]; struct { double x_2_3_1; double x_2_3_2; double x_2_3_3; double x_2_3_4; } x_1_2_2; } x_2_1_1; } x2; void *x3; union { struct __C3DImage {} *x_4_1_1; void *x_4_1_2; struct __C3DImageProxy {} *x_4_1_3; struct __C3DTexture {} *x_4_1_4; } x4; unsigned int x5 : 8; unsigned int x6 : 1; unsigned int x7 : 1; int x8; struct __C3DTextureSampler {} *x9; struct __C3DTransforms {} *x10; double x11; int x12; void *x13; }*)arg1 withEngineContext:(struct __C3DEngineContext { }*)arg2;
- (void)setLibraryManager:(id)arg1;
- (id)shFromCPU:(id)arg1;
- (id)shaderManagerForPassDescriptor:(id)arg1;
- (id)specularDFGTexture;
- (id)sphericalHarmonicsForEnvironmentTexture:(id)arg1 order:(unsigned int)arg2 commandBuffer:(id)arg3;
- (struct __C3DEngineStats { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; double x25; double x26; double x27; double x28; double x29; double x30; double x31; double x32; double x33; double x34; double x35; double x36; double x37; double x38; unsigned int x39; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; unsigned int x45; unsigned int x46; unsigned int x47; unsigned int x48; unsigned int x49; unsigned int x50; unsigned int x51; unsigned int x52; unsigned int x53; unsigned int x54; double x55; double x56; double x57; double x58[60]; unsigned int x59; double x60; double x61; }*)stats;
- (id)textureForSamplingTexture:(id)arg1 atSize:(unsigned int)arg2 mipmapLevelCount:(unsigned int*)arg3;
- (id)unstageTexture:(id)arg1;

@end