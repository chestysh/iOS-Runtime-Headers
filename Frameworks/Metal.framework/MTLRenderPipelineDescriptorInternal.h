/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLRenderPipelineDescriptorInternal : MTLRenderPipelineDescriptor {
    struct MTLRenderPipelineDescriptorPrivate { 
        MTLRenderPipelineColorAttachmentDescriptorArrayInternal *attachments; 
        unsigned int rtBlendDescHash[8]; 
        unsigned int depthAttachmentPixelFormat; 
        unsigned int stencilAttachmentPixelFormat; 
        unsigned int tessellationPartitionMode; 
        unsigned int maxTessellationFactor; 
        BOOL tessellationFactorScaleEnabled; 
        unsigned int tessellationFactorFormat; 
        unsigned int tessellationControlPointIndexType; 
        unsigned int tessellationFactorStepFunction; 
        unsigned int tessellationOutputWindingOrder; 
        unsigned int sampleCount; 
        unsigned int sampleMask; 
        union { 
            unsigned int sampleCoverageHash; 
            float sampleCoverage; 
        } ; 
        union { 
            unsigned int miscHash; 
            struct { 
                unsigned int alphaToCoverageEnabled : 1; 
                unsigned int alphaToOneEnabled : 1; 
                unsigned int rasterizationEnabled : 1; 
                unsigned int inputPrimitiveTopology : 2; 
                unsigned int vertexEnabled : 1; 
                unsigned int depthStencilWriteDisabled : 1; 
                unsigned int pad : 7; 
                unsigned int pointSmoothEnabled : 1; 
                unsigned int clipDistanceEnableMask : 8; 
                unsigned int alphaTestFunc : 3; 
                unsigned int alphaTestEnabled : 1; 
                unsigned int logicOp : 4; 
                unsigned int logicOpEnabled : 1; 
            } ; 
        } ; 
        unsigned int vertexDepthCompareClampMask; 
        unsigned int fragmentDepthCompareClampMask; 
        NSString *label; 
        <MTLFunction> *vertexFunction; 
        <MTLFunction> *fragmentFunction; 
        MTLVertexDescriptorInternal *vertexDescriptor; 
    }  _private;
}

- (const struct MTLRenderPipelineDescriptorPrivate { id x1; /* Warning: Unrecognized filer type: '8' using 'void*' */ void*x2; unsigned int x3; void*x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; BOOL x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; union { unsigned int x_16_1_1; float x_16_1_2; } x16; union { unsigned int x_17_1_1; struct { unsigned int x_2_2_1 : 1; unsigned int x_2_2_2 : 1; unsigned int x_2_2_3 : 1; unsigned int x_2_2_4 : 2; unsigned int x_2_2_5 : 1; unsigned int x_2_2_6 : 1; unsigned int x_2_2_7 : 7; unsigned int x_2_2_8 : 1; unsigned int x_2_2_9 : 8; unsigned int x_2_2_10 : 3; unsigned int x_2_2_11 : 1; unsigned int x_2_2_12 : 4; unsigned int x_2_2_13 : 1; } x_17_1_2; } x17; unsigned int x18; unsigned int x19; id x20; id x21; }*)_descriptorPrivate;
- (unsigned int)alphaTestFunction;
- (void)attachVertexDescriptor:(id)arg1;
- (unsigned char)clipDistanceEnableMask;
- (id)colorAttachments;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned int)depthAttachmentPixelFormat;
- (id)description;
- (id)fastBlendDescriptorAtIndex:(unsigned int)arg1;
- (id)formattedDescription:(unsigned int)arg1;
- (unsigned int)fragmentDepthCompareClampMask;
- (id)fragmentFunction;
- (unsigned int)hash;
- (id)init;
- (BOOL)isAlphaTestEnabled;
- (BOOL)isAlphaToCoverageEnabled;
- (BOOL)isAlphaToOneEnabled;
- (BOOL)isDepthStencilWriteDisabled;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isLogicOperationEnabled;
- (BOOL)isPointSmoothEnabled;
- (BOOL)isRasterizationEnabled;
- (BOOL)isTessellationFactorScaleEnabled;
- (BOOL)isVertexEnabled;
- (id)label;
- (unsigned int)logicOperation;
- (unsigned int)maxTessellationFactor;
- (id)newSerializedVertexDataWithFlags:(unsigned int)arg1 error:(id*)arg2;
- (void)reset;
- (unsigned int)sampleCount;
- (float)sampleCoverage;
- (unsigned int)sampleMask;
- (id)serializeFragmentData;
- (void)setAlphaTestEnabled:(BOOL)arg1;
- (void)setAlphaTestFunction:(unsigned int)arg1;
- (void)setAlphaToCoverageEnabled:(BOOL)arg1;
- (void)setAlphaToOneEnabled:(BOOL)arg1;
- (void)setClipDistanceEnableMask:(unsigned char)arg1;
- (void)setDepthAttachmentPixelFormat:(unsigned int)arg1;
- (void)setDepthStencilWriteDisabled:(BOOL)arg1;
- (void)setFragmentDepthCompareClampMask:(unsigned int)arg1;
- (void)setFragmentFunction:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLogicOperation:(unsigned int)arg1;
- (void)setLogicOperationEnabled:(BOOL)arg1;
- (void)setMaxTessellationFactor:(unsigned int)arg1;
- (void)setPointSmoothEnabled:(BOOL)arg1;
- (void)setRasterizationEnabled:(BOOL)arg1;
- (void)setSampleCount:(unsigned int)arg1;
- (void)setSampleCoverage:(float)arg1;
- (void)setSampleMask:(unsigned int)arg1;
- (void)setStencilAttachmentPixelFormat:(unsigned int)arg1;
- (void)setTessellationControlPointIndexType:(unsigned int)arg1;
- (void)setTessellationFactorFormat:(unsigned int)arg1;
- (void)setTessellationFactorScaleEnabled:(BOOL)arg1;
- (void)setTessellationFactorStepFunction:(unsigned int)arg1;
- (void)setTessellationOutputWindingOrder:(unsigned int)arg1;
- (void)setTessellationPartitionMode:(unsigned int)arg1;
- (void)setVertexDepthCompareClampMask:(unsigned int)arg1;
- (void)setVertexDescriptor:(id)arg1;
- (void)setVertexEnabled:(BOOL)arg1;
- (void)setVertexFunction:(id)arg1;
- (unsigned int)stencilAttachmentPixelFormat;
- (unsigned int)tessellationControlPointIndexType;
- (unsigned int)tessellationFactorFormat;
- (unsigned int)tessellationFactorStepFunction;
- (unsigned int)tessellationOutputWindingOrder;
- (unsigned int)tessellationPartitionMode;
- (void)validateWithDevice:(id)arg1;
- (unsigned int)vertexDepthCompareClampMask;
- (id)vertexDescriptor;
- (id)vertexFunction;

@end
