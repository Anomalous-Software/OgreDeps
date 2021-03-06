project(FreeImage)

set(FreeImage_SOURCES
	Source/CacheFile.h
    Source/FreeImage.h
    Source/FreeImageIO.h
    Source/MapIntrospector.h
    Source/Plugin.h
    Source/Quantizers.h
    Source/ToneMapping.h
    Source/Utilities.h
    Source/DeprecationManager/Deprecated.cpp
    Source/DeprecationManager/DeprecationMgr.cpp
    Source/DeprecationManager/DeprecationMgr.h
    Source/FreeImage/BitmapAccess.cpp
    Source/FreeImage/CacheFile.cpp
    Source/FreeImage/ColorLookup.cpp
    Source/FreeImage/Conversion.cpp
    Source/FreeImage/Conversion16_555.cpp
    Source/FreeImage/Conversion16_565.cpp
    Source/FreeImage/Conversion24.cpp
    Source/FreeImage/Conversion32.cpp
    Source/FreeImage/Conversion4.cpp
    Source/FreeImage/Conversion8.cpp
    Source/FreeImage/ConversionFloat.cpp
    Source/FreeImage/ConversionRGB16.cpp
    Source/FreeImage/ConversionRGBA16.cpp
    Source/FreeImage/ConversionRGBAF.cpp
    Source/FreeImage/ConversionRGBF.cpp
    Source/FreeImage/ConversionType.cpp
    Source/FreeImage/ConversionUINT16.cpp
    Source/FreeImage/FreeImage.cpp
    Source/FreeImage/FreeImageC.c
    Source/FreeImage/FreeImageIO.cpp
    Source/FreeImage/GetType.cpp
    Source/FreeImage/Halftoning.cpp
    Source/FreeImage/J2KHelper.cpp
    Source/FreeImage/J2KHelper.h
    Source/FreeImage/LFPQuantizer.cpp
    Source/FreeImage/MemoryIO.cpp
    Source/FreeImage/MNGHelper.cpp
    Source/FreeImage/MultiPage.cpp
    Source/FreeImage/NNQuantizer.cpp
    Source/FreeImage/PixelAccess.cpp
    Source/FreeImage/Plugin.cpp
    Source/FreeImage/PSDParser.cpp
    Source/FreeImage/PSDParser.h
    Source/FreeImage/TIFFLogLuv.cpp
    Source/FreeImage/tmoColorConvert.cpp
    Source/FreeImage/tmoDrago03.cpp
    Source/FreeImage/tmoFattal02.cpp
    Source/FreeImage/tmoReinhard05.cpp
    Source/FreeImage/ToneMapping.cpp
    Source/FreeImage/WuQuantizer.cpp
    Source/FreeImage/ZLibInterface.cpp
    Source/FreeImageToolkit/Background.cpp
    Source/FreeImageToolkit/BSplineRotate.cpp
    Source/FreeImageToolkit/Channels.cpp
    Source/FreeImageToolkit/ClassicRotate.cpp
    Source/FreeImageToolkit/Colors.cpp
    Source/FreeImageToolkit/CopyPaste.cpp
    Source/FreeImageToolkit/Display.cpp
    Source/FreeImageToolkit/Filters.h
    Source/FreeImageToolkit/Flip.cpp
    Source/FreeImageToolkit/JPEGTransform.cpp
    Source/FreeImageToolkit/MultigridPoissonSolver.cpp
    Source/FreeImageToolkit/Rescale.cpp
    Source/FreeImageToolkit/Resize.cpp
    Source/FreeImageToolkit/Resize.h
    Source/LibJPEG/cderror.h
    Source/LibJPEG/cdjpeg.c
    Source/LibJPEG/cdjpeg.h
    Source/LibJPEG/jaricom.c
    Source/LibJPEG/jcapimin.c
    Source/LibJPEG/jcapistd.c
    Source/LibJPEG/jcarith.c
    Source/LibJPEG/jccoefct.c
    Source/LibJPEG/jccolor.c
    Source/LibJPEG/jcdctmgr.c
    Source/LibJPEG/jchuff.c
    Source/LibJPEG/jcinit.c
    Source/LibJPEG/jcmainct.c
    Source/LibJPEG/jcmarker.c
    Source/LibJPEG/jcmaster.c
    Source/LibJPEG/jcomapi.c
    Source/LibJPEG/jconfig.h
    Source/LibJPEG/jcparam.c
    Source/LibJPEG/jcprepct.c
    Source/LibJPEG/jcsample.c
    Source/LibJPEG/jctrans.c
    Source/LibJPEG/jdapimin.c
    Source/LibJPEG/jdapistd.c
    Source/LibJPEG/jdarith.c
    Source/LibJPEG/jdatadst.c
    Source/LibJPEG/jdatasrc.c
    Source/LibJPEG/jdcoefct.c
    Source/LibJPEG/jdcolor.c
    Source/LibJPEG/jdct.h
    Source/LibJPEG/jddctmgr.c
    Source/LibJPEG/jdhuff.c
    Source/LibJPEG/jdinput.c
    Source/LibJPEG/jdmainct.c
    Source/LibJPEG/jdmarker.c
    Source/LibJPEG/jdmaster.c
    Source/LibJPEG/jdmerge.c
    Source/LibJPEG/jdpostct.c
    Source/LibJPEG/jdsample.c
    Source/LibJPEG/jdtrans.c
    Source/LibJPEG/jerror.c
    Source/LibJPEG/jerror.h
    Source/LibJPEG/jfdctflt.c
    Source/LibJPEG/jfdctfst.c
    Source/LibJPEG/jfdctint.c
    Source/LibJPEG/jidctflt.c
    Source/LibJPEG/jidctfst.c
    Source/LibJPEG/jidctint.c
    Source/LibJPEG/jinclude.h
    Source/LibJPEG/jmemmgr.c
    Source/LibJPEG/jmemnobs.c
    Source/LibJPEG/jmemsys.h
    Source/LibJPEG/jmorecfg.h
    Source/LibJPEG/jpegint.h
    Source/LibJPEG/jpeglib.h
    Source/LibJPEG/jquant1.c
    Source/LibJPEG/jquant2.c
    Source/LibJPEG/jutils.c
    Source/LibJPEG/jversion.h
    Source/LibJPEG/rdbmp.c
    Source/LibJPEG/rdcolmap.c
    Source/LibJPEG/rdgif.c
    Source/LibJPEG/rdppm.c
    Source/LibJPEG/rdrle.c
    Source/LibJPEG/rdswitch.c
    Source/LibJPEG/rdtarga.c
    Source/LibJPEG/transupp.c
    Source/LibJPEG/transupp.h
    Source/LibJPEG/wrbmp.c
    Source/LibJPEG/wrgif.c
    Source/LibJPEG/wrppm.c
    Source/LibJPEG/wrrle.c
    Source/LibJPEG/wrtarga.c
    Source/LibOpenJPEG/bio.c
    Source/LibOpenJPEG/bio.h
    Source/LibOpenJPEG/cio.c
    Source/LibOpenJPEG/cio.h
    Source/LibOpenJPEG/dwt.c
    Source/LibOpenJPEG/dwt.h
    Source/LibOpenJPEG/event.c
    Source/LibOpenJPEG/event.h
    Source/LibOpenJPEG/function_list.c
    Source/LibOpenJPEG/function_list.h
    Source/LibOpenJPEG/image.c
    Source/LibOpenJPEG/image.h
    Source/LibOpenJPEG/indexbox_manager.h
    Source/LibOpenJPEG/invert.c
    Source/LibOpenJPEG/invert.h
    Source/LibOpenJPEG/j2k.c
    Source/LibOpenJPEG/j2k.h
    Source/LibOpenJPEG/jp2.c
    Source/LibOpenJPEG/jp2.h
    Source/LibOpenJPEG/mct.c
    Source/LibOpenJPEG/mct.h
    Source/LibOpenJPEG/mqc.c
    Source/LibOpenJPEG/mqc.h
    Source/LibOpenJPEG/openjpeg.c
    Source/LibOpenJPEG/openjpeg.h
    Source/LibOpenJPEG/opj_clock.c
    Source/LibOpenJPEG/opj_clock.h
    Source/LibOpenJPEG/opj_codec.h
    Source/LibOpenJPEG/opj_config.h
    Source/LibOpenJPEG/opj_config_private.h
    Source/LibOpenJPEG/opj_includes.h
    Source/LibOpenJPEG/opj_intmath.h
    Source/LibOpenJPEG/opj_inttypes.h
    Source/LibOpenJPEG/opj_malloc.h
    Source/LibOpenJPEG/opj_stdint.h
    Source/LibOpenJPEG/pi.c
    Source/LibOpenJPEG/pi.h
    Source/LibOpenJPEG/raw.c
    Source/LibOpenJPEG/raw.h
    Source/LibOpenJPEG/t1.c
    Source/LibOpenJPEG/t1.h
    Source/LibOpenJPEG/t1_luts.h
    Source/LibOpenJPEG/t2.c
    Source/LibOpenJPEG/t2.h
    Source/LibOpenJPEG/tcd.c
    Source/LibOpenJPEG/tcd.h
    Source/LibOpenJPEG/tgt.c
    Source/LibOpenJPEG/tgt.h
    Source/LibPNG/png.c
    Source/LibPNG/png.h
    Source/LibPNG/pngconf.h
    Source/LibPNG/pngdebug.h
    Source/LibPNG/pngerror.c
    Source/LibPNG/pngget.c
    Source/LibPNG/pnginfo.h
    Source/LibPNG/pnglibconf.h
    Source/LibPNG/pngmem.c
    Source/LibPNG/pngpread.c
    Source/LibPNG/pngpriv.h
    Source/LibPNG/pngread.c
    Source/LibPNG/pngrio.c
    Source/LibPNG/pngrtran.c
    Source/LibPNG/pngrutil.c
    Source/LibPNG/pngset.c
    Source/LibPNG/pngstruct.h
    Source/LibPNG/pngtrans.c
    Source/LibPNG/pngwio.c
    Source/LibPNG/pngwrite.c
    Source/LibPNG/pngwtran.c
    Source/LibPNG/pngwutil.c
    Source/LibWebP/src/dec/alphai.h
    Source/LibWebP/src/dec/dec.alpha.c
    Source/LibWebP/src/dec/dec.buffer.c
    Source/LibWebP/src/dec/dec.frame.c
    Source/LibWebP/src/dec/dec.idec.c
    Source/LibWebP/src/dec/dec.io.c
    Source/LibWebP/src/dec/dec.quant.c
    Source/LibWebP/src/dec/dec.tree.c
    Source/LibWebP/src/dec/dec.vp8.c
    Source/LibWebP/src/dec/dec.vp8l.c
    Source/LibWebP/src/dec/dec.webp.c
    Source/LibWebP/src/dec/decode_vp8.h
    Source/LibWebP/src/dec/vp8i.h
    Source/LibWebP/src/dec/vp8li.h
    Source/LibWebP/src/dec/webpi.h
    Source/LibWebP/src/demux/demux.demux.c
    Source/LibWebP/src/dsp/dsp.alpha_processing.c
    Source/LibWebP/src/dsp/dsp.alpha_processing_mips_dsp_r2.c
    Source/LibWebP/src/dsp/dsp.alpha_processing_sse2.c
    Source/LibWebP/src/dsp/dsp.argb.c
    Source/LibWebP/src/dsp/dsp.argb_mips_dsp_r2.c
    Source/LibWebP/src/dsp/dsp.argb_sse2.c
    Source/LibWebP/src/dsp/dsp.cost.c
    Source/LibWebP/src/dsp/dsp.cost_mips32.c
    Source/LibWebP/src/dsp/dsp.cost_mips_dsp_r2.c
    Source/LibWebP/src/dsp/dsp.cost_sse2.c
    Source/LibWebP/src/dsp/dsp.cpu.c
    Source/LibWebP/src/dsp/dsp.dec.c
    Source/LibWebP/src/dsp/dsp.dec_clip_tables.c
    Source/LibWebP/src/dsp/dsp.dec_mips32.c
    Source/LibWebP/src/dsp/dsp.dec_mips_dsp_r2.c
    Source/LibWebP/src/dsp/dsp.dec_neon.c
    Source/LibWebP/src/dsp/dsp.dec_sse2.c
    Source/LibWebP/src/dsp/dsp.enc.c
    Source/LibWebP/src/dsp/dsp.enc_avx2.c
    Source/LibWebP/src/dsp/dsp.enc_mips32.c
    Source/LibWebP/src/dsp/dsp.enc_mips_dsp_r2.c
    Source/LibWebP/src/dsp/dsp.enc_neon.c
    Source/LibWebP/src/dsp/dsp.enc_sse2.c
    Source/LibWebP/src/dsp/dsp.filters.c
    Source/LibWebP/src/dsp/dsp.filters_mips_dsp_r2.c
    Source/LibWebP/src/dsp/dsp.filters_sse2.c
    Source/LibWebP/src/dsp/dsp.h
    Source/LibWebP/src/dsp/dsp.lossless.c
    Source/LibWebP/src/dsp/dsp.lossless_mips32.c
    Source/LibWebP/src/dsp/dsp.lossless_mips_dsp_r2.c
    Source/LibWebP/src/dsp/dsp.lossless_neon.c
    Source/LibWebP/src/dsp/dsp.lossless_sse2.c
    Source/LibWebP/src/dsp/dsp.rescaler.c
    Source/LibWebP/src/dsp/dsp.rescaler_mips32.c
    Source/LibWebP/src/dsp/dsp.rescaler_mips_dsp_r2.c
    Source/LibWebP/src/dsp/dsp.upsampling.c
    Source/LibWebP/src/dsp/dsp.upsampling_mips_dsp_r2.c
    Source/LibWebP/src/dsp/dsp.upsampling_neon.c
    Source/LibWebP/src/dsp/dsp.upsampling_sse2.c
    Source/LibWebP/src/dsp/dsp.yuv.c
    Source/LibWebP/src/dsp/dsp.yuv_mips32.c
    Source/LibWebP/src/dsp/dsp.yuv_mips_dsp_r2.c
    Source/LibWebP/src/dsp/dsp.yuv_sse2.c
    Source/LibWebP/src/dsp/lossless.h
    Source/LibWebP/src/dsp/mips_macro.h
    Source/LibWebP/src/dsp/neon.h
    Source/LibWebP/src/dsp/yuv.h
    Source/LibWebP/src/dsp/yuv_tables_sse2.h
    Source/LibWebP/src/enc/backward_references.h
    Source/LibWebP/src/enc/cost.h
    Source/LibWebP/src/enc/enc.alpha.c
    Source/LibWebP/src/enc/enc.analysis.c
    Source/LibWebP/src/enc/enc.backward_references.c
    Source/LibWebP/src/enc/enc.config.c
    Source/LibWebP/src/enc/enc.cost.c
    Source/LibWebP/src/enc/enc.filter.c
    Source/LibWebP/src/enc/enc.frame.c
    Source/LibWebP/src/enc/enc.histogram.c
    Source/LibWebP/src/enc/enc.iterator.c
    Source/LibWebP/src/enc/enc.near_lossless.c
    Source/LibWebP/src/enc/enc.picture.c
    Source/LibWebP/src/enc/enc.picture_csp.c
    Source/LibWebP/src/enc/enc.picture_psnr.c
    Source/LibWebP/src/enc/enc.picture_rescale.c
    Source/LibWebP/src/enc/enc.picture_tools.c
    Source/LibWebP/src/enc/enc.quant.c
    Source/LibWebP/src/enc/enc.syntax.c
    Source/LibWebP/src/enc/enc.token.c
    Source/LibWebP/src/enc/enc.tree.c
    Source/LibWebP/src/enc/enc.vp8l.c
    Source/LibWebP/src/enc/enc.webpenc.c
    Source/LibWebP/src/enc/histogram.h
    Source/LibWebP/src/enc/vp8enci.h
    Source/LibWebP/src/enc/vp8li.h
    Source/LibWebP/src/mux/mux.anim_encode.c
    Source/LibWebP/src/mux/mux.muxedit.c
    Source/LibWebP/src/mux/mux.muxinternal.c
    Source/LibWebP/src/mux/mux.muxread.c
    Source/LibWebP/src/mux/muxi.h
    Source/LibWebP/src/utils/bit_reader.h
    Source/LibWebP/src/utils/bit_reader_inl.h
    Source/LibWebP/src/utils/bit_writer.h
    Source/LibWebP/src/utils/color_cache.h
    Source/LibWebP/src/utils/endian_inl.h
    Source/LibWebP/src/utils/filters.h
    Source/LibWebP/src/utils/huffman.h
    Source/LibWebP/src/utils/huffman_encode.h
    Source/LibWebP/src/utils/quant_levels.h
    Source/LibWebP/src/utils/quant_levels_dec.h
    Source/LibWebP/src/utils/random.h
    Source/LibWebP/src/utils/rescaler.h
    Source/LibWebP/src/utils/thread.h
    Source/LibWebP/src/utils/utils.bit_reader.c
    Source/LibWebP/src/utils/utils.bit_writer.c
    Source/LibWebP/src/utils/utils.color_cache.c
    Source/LibWebP/src/utils/utils.filters.c
    Source/LibWebP/src/utils/utils.h
    Source/LibWebP/src/utils/utils.huffman.c
    Source/LibWebP/src/utils/utils.huffman_encode.c
    Source/LibWebP/src/utils/utils.quant_levels.c
    Source/LibWebP/src/utils/utils.quant_levels_dec.c
    Source/LibWebP/src/utils/utils.random.c
    Source/LibWebP/src/utils/utils.rescaler.c
    Source/LibWebP/src/utils/utils.thread.c
    Source/LibWebP/src/utils/utils.utils.c
    Source/LibWebP/src/webp/decode.h
    Source/LibWebP/src/webp/demux.h
    Source/LibWebP/src/webp/encode.h
    Source/LibWebP/src/webp/format_constants.h
    Source/LibWebP/src/webp/mux.h
    Source/LibWebP/src/webp/mux_types.h
    Source/LibWebP/src/webp/types.h
    Source/Metadata/Exif.cpp
    Source/Metadata/FIRational.cpp
    Source/Metadata/FIRational.h
    Source/Metadata/FreeImageTag.cpp
    Source/Metadata/FreeImageTag.h
    Source/Metadata/IPTC.cpp
    Source/Metadata/TagConversion.cpp
    Source/Metadata/TagLib.cpp
    Source/ZLib/adler32.c
    Source/ZLib/compress.c
    Source/ZLib/crc32.c
    Source/ZLib/crc32.h
    Source/ZLib/deflate.c
    Source/ZLib/deflate.h
    Source/ZLib/gzclose.c
    Source/ZLib/gzguts.h
    Source/ZLib/gzlib.c
    Source/ZLib/gzread.c
    Source/ZLib/gzwrite.c
    Source/ZLib/infback.c
    Source/ZLib/inffast.c
    Source/ZLib/inffast.h
    Source/ZLib/inffixed.h
    Source/ZLib/inflate.c
    Source/ZLib/inflate.h
    Source/ZLib/inftrees.c
    Source/ZLib/inftrees.h
    Source/ZLib/Makefile
    Source/ZLib/Makefile.in
    Source/ZLib/trees.c
    Source/ZLib/trees.h
    Source/ZLib/uncompr.c
    Source/ZLib/zconf.h
    Source/ZLib/zconf.h.in
    Source/ZLib/zlib.h
    Source/ZLib/zutil.c
    Source/ZLib/zutil.h
)

    set(FreeImage_SOURCES ${FreeImage_SOURCES} Source/FreeImage/PluginBMP.cpp    )

if(BUILD_PLUGIN_CUT)
    set(FreeImage_SOURCES ${FreeImage_SOURCES} Source/FreeImage/PluginCUT.cpp	 )
else()
	set(FreeImage_SOURCES ${FreeImage_SOURCES} Source/Dummy/PluginDummyCUT.cpp	 )
endif()

    set(FreeImage_SOURCES ${FreeImage_SOURCES} Source/FreeImage/PluginDDS.cpp	 )

if(BUILD_PLUGIN_EXR)
    set(FreeImage_SOURCES ${FreeImage_SOURCES} 
		Source/FreeImage/PluginEXR.cpp	 
		Source/OpenEXR/IlmBaseConfig.h
		Source/OpenEXR/OpenEXRConfig.h
		Source/OpenEXR/Half/half.cpp
		Source/OpenEXR/Half/half.h
		Source/OpenEXR/Half/halfExport.h
		Source/OpenEXR/Half/halfFunction.h
		Source/OpenEXR/Half/halfLimits.h
		Source/OpenEXR/Iex/Iex.h
		Source/OpenEXR/Iex/IexBaseExc.cpp
		Source/OpenEXR/Iex/IexBaseExc.h
		Source/OpenEXR/Iex/IexErrnoExc.h
		Source/OpenEXR/Iex/IexExport.h
		Source/OpenEXR/Iex/IexForward.h
		Source/OpenEXR/Iex/IexMacros.h
		Source/OpenEXR/Iex/IexMathExc.h
		Source/OpenEXR/Iex/IexNamespace.h
		Source/OpenEXR/Iex/IexThrowErrnoExc.cpp
		Source/OpenEXR/Iex/IexThrowErrnoExc.h
		Source/OpenEXR/IexMath/IexMathFloatExc.cpp
		Source/OpenEXR/IexMath/IexMathFloatExc.h
		Source/OpenEXR/IexMath/IexMathFpu.cpp
		Source/OpenEXR/IexMath/IexMathFpu.h
		Source/OpenEXR/IexMath/IexMathIeeeExc.h
		Source/OpenEXR/IlmImf/ImfAcesFile.cpp
		Source/OpenEXR/IlmImf/ImfAcesFile.h
		Source/OpenEXR/IlmImf/ImfArray.h
		Source/OpenEXR/IlmImf/ImfAttribute.cpp
		Source/OpenEXR/IlmImf/ImfAttribute.h
		Source/OpenEXR/IlmImf/ImfAutoArray.h
		Source/OpenEXR/IlmImf/ImfB44Compressor.cpp
		Source/OpenEXR/IlmImf/ImfB44Compressor.h
		Source/OpenEXR/IlmImf/ImfBoxAttribute.cpp
		Source/OpenEXR/IlmImf/ImfBoxAttribute.h
		Source/OpenEXR/IlmImf/ImfChannelList.cpp
		Source/OpenEXR/IlmImf/ImfChannelList.h
		Source/OpenEXR/IlmImf/ImfChannelListAttribute.cpp
		Source/OpenEXR/IlmImf/ImfChannelListAttribute.h
		Source/OpenEXR/IlmImf/ImfCheckedArithmetic.h
		Source/OpenEXR/IlmImf/ImfChromaticities.cpp
		Source/OpenEXR/IlmImf/ImfChromaticities.h
		Source/OpenEXR/IlmImf/ImfChromaticitiesAttribute.cpp
		Source/OpenEXR/IlmImf/ImfChromaticitiesAttribute.h
		Source/OpenEXR/IlmImf/ImfCompositeDeepScanLine.cpp
		Source/OpenEXR/IlmImf/ImfCompositeDeepScanLine.h
		Source/OpenEXR/IlmImf/ImfCompression.h
		Source/OpenEXR/IlmImf/ImfCompressionAttribute.cpp
		Source/OpenEXR/IlmImf/ImfCompressionAttribute.h
		Source/OpenEXR/IlmImf/ImfCompressor.cpp
		Source/OpenEXR/IlmImf/ImfCompressor.h
		Source/OpenEXR/IlmImf/ImfConvert.cpp
		Source/OpenEXR/IlmImf/ImfConvert.h
		Source/OpenEXR/IlmImf/ImfCRgbaFile.cpp
		Source/OpenEXR/IlmImf/ImfCRgbaFile.h
		Source/OpenEXR/IlmImf/ImfDeepCompositing.cpp
		Source/OpenEXR/IlmImf/ImfDeepCompositing.h
		Source/OpenEXR/IlmImf/ImfDeepFrameBuffer.cpp
		Source/OpenEXR/IlmImf/ImfDeepFrameBuffer.h
		Source/OpenEXR/IlmImf/ImfDeepImageState.h
		Source/OpenEXR/IlmImf/ImfDeepImageStateAttribute.cpp
		Source/OpenEXR/IlmImf/ImfDeepImageStateAttribute.h
		Source/OpenEXR/IlmImf/ImfDeepScanLineInputFile.cpp
		Source/OpenEXR/IlmImf/ImfDeepScanLineInputFile.h
		Source/OpenEXR/IlmImf/ImfDeepScanLineInputPart.cpp
		Source/OpenEXR/IlmImf/ImfDeepScanLineInputPart.h
		Source/OpenEXR/IlmImf/ImfDeepScanLineOutputFile.cpp
		Source/OpenEXR/IlmImf/ImfDeepScanLineOutputFile.h
		Source/OpenEXR/IlmImf/ImfDeepScanLineOutputPart.cpp
		Source/OpenEXR/IlmImf/ImfDeepScanLineOutputPart.h
		Source/OpenEXR/IlmImf/ImfDeepTiledInputFile.cpp
		Source/OpenEXR/IlmImf/ImfDeepTiledInputFile.h
		Source/OpenEXR/IlmImf/ImfDeepTiledInputPart.cpp
		Source/OpenEXR/IlmImf/ImfDeepTiledInputPart.h
		Source/OpenEXR/IlmImf/ImfDeepTiledOutputFile.cpp
		Source/OpenEXR/IlmImf/ImfDeepTiledOutputFile.h
		Source/OpenEXR/IlmImf/ImfDeepTiledOutputPart.cpp
		Source/OpenEXR/IlmImf/ImfDeepTiledOutputPart.h
		Source/OpenEXR/IlmImf/ImfDoubleAttribute.cpp
		Source/OpenEXR/IlmImf/ImfDoubleAttribute.h
		Source/OpenEXR/IlmImf/ImfDwaCompressor.cpp
		Source/OpenEXR/IlmImf/ImfDwaCompressor.h
		Source/OpenEXR/IlmImf/ImfDwaCompressorSimd.h
		Source/OpenEXR/IlmImf/ImfEnvmap.cpp
		Source/OpenEXR/IlmImf/ImfEnvmap.h
		Source/OpenEXR/IlmImf/ImfEnvmapAttribute.cpp
		Source/OpenEXR/IlmImf/ImfEnvmapAttribute.h
		Source/OpenEXR/IlmImf/ImfExport.h
		Source/OpenEXR/IlmImf/ImfFastHuf.cpp
		Source/OpenEXR/IlmImf/ImfFastHuf.h
		Source/OpenEXR/IlmImf/ImfFloatAttribute.cpp
		Source/OpenEXR/IlmImf/ImfFloatAttribute.h
		Source/OpenEXR/IlmImf/ImfFloatVectorAttribute.cpp
		Source/OpenEXR/IlmImf/ImfFloatVectorAttribute.h
		Source/OpenEXR/IlmImf/ImfForward.h
		Source/OpenEXR/IlmImf/ImfFrameBuffer.cpp
		Source/OpenEXR/IlmImf/ImfFrameBuffer.h
		Source/OpenEXR/IlmImf/ImfFramesPerSecond.cpp
		Source/OpenEXR/IlmImf/ImfFramesPerSecond.h
		Source/OpenEXR/IlmImf/ImfGenericInputFile.cpp
		Source/OpenEXR/IlmImf/ImfGenericInputFile.h
		Source/OpenEXR/IlmImf/ImfGenericOutputFile.cpp
		Source/OpenEXR/IlmImf/ImfGenericOutputFile.h
		Source/OpenEXR/IlmImf/ImfHeader.cpp
		Source/OpenEXR/IlmImf/ImfHeader.h
		Source/OpenEXR/IlmImf/ImfHuf.cpp
		Source/OpenEXR/IlmImf/ImfHuf.h
		Source/OpenEXR/IlmImf/ImfInputFile.cpp
		Source/OpenEXR/IlmImf/ImfInputFile.h
		Source/OpenEXR/IlmImf/ImfInputPart.cpp
		Source/OpenEXR/IlmImf/ImfInputPart.h
		Source/OpenEXR/IlmImf/ImfInputPartData.cpp
		Source/OpenEXR/IlmImf/ImfInputPartData.h
		Source/OpenEXR/IlmImf/ImfInputStreamMutex.h
		Source/OpenEXR/IlmImf/ImfInt64.h
		Source/OpenEXR/IlmImf/ImfIntAttribute.cpp
		Source/OpenEXR/IlmImf/ImfIntAttribute.h
		Source/OpenEXR/IlmImf/ImfIO.cpp
		Source/OpenEXR/IlmImf/ImfIO.h
		Source/OpenEXR/IlmImf/ImfKeyCode.cpp
		Source/OpenEXR/IlmImf/ImfKeyCode.h
		Source/OpenEXR/IlmImf/ImfKeyCodeAttribute.cpp
		Source/OpenEXR/IlmImf/ImfKeyCodeAttribute.h
		Source/OpenEXR/IlmImf/ImfLineOrder.h
		Source/OpenEXR/IlmImf/ImfLineOrderAttribute.cpp
		Source/OpenEXR/IlmImf/ImfLineOrderAttribute.h
		Source/OpenEXR/IlmImf/ImfLut.cpp
		Source/OpenEXR/IlmImf/ImfLut.h
		Source/OpenEXR/IlmImf/ImfMatrixAttribute.cpp
		Source/OpenEXR/IlmImf/ImfMatrixAttribute.h
		Source/OpenEXR/IlmImf/ImfMisc.cpp
		Source/OpenEXR/IlmImf/ImfMisc.h
		Source/OpenEXR/IlmImf/ImfMultiPartInputFile.cpp
		Source/OpenEXR/IlmImf/ImfMultiPartInputFile.h
		Source/OpenEXR/IlmImf/ImfMultiPartOutputFile.cpp
		Source/OpenEXR/IlmImf/ImfMultiPartOutputFile.h
		Source/OpenEXR/IlmImf/ImfMultiView.cpp
		Source/OpenEXR/IlmImf/ImfMultiView.h
		Source/OpenEXR/IlmImf/ImfName.h
		Source/OpenEXR/IlmImf/ImfNamespace.h
		Source/OpenEXR/IlmImf/ImfOpaqueAttribute.cpp
		Source/OpenEXR/IlmImf/ImfOpaqueAttribute.h
		Source/OpenEXR/IlmImf/ImfOptimizedPixelReading.h
		Source/OpenEXR/IlmImf/ImfOutputFile.cpp
		Source/OpenEXR/IlmImf/ImfOutputFile.h
		Source/OpenEXR/IlmImf/ImfOutputPart.cpp
		Source/OpenEXR/IlmImf/ImfOutputPart.h
		Source/OpenEXR/IlmImf/ImfOutputPartData.cpp
		Source/OpenEXR/IlmImf/ImfOutputPartData.h
		Source/OpenEXR/IlmImf/ImfOutputStreamMutex.h
		Source/OpenEXR/IlmImf/ImfPartHelper.h
		Source/OpenEXR/IlmImf/ImfPartType.cpp
		Source/OpenEXR/IlmImf/ImfPartType.h
		Source/OpenEXR/IlmImf/ImfPixelType.h
		Source/OpenEXR/IlmImf/ImfPizCompressor.cpp
		Source/OpenEXR/IlmImf/ImfPizCompressor.h
		Source/OpenEXR/IlmImf/ImfPreviewImage.cpp
		Source/OpenEXR/IlmImf/ImfPreviewImage.h
		Source/OpenEXR/IlmImf/ImfPreviewImageAttribute.cpp
		Source/OpenEXR/IlmImf/ImfPreviewImageAttribute.h
		Source/OpenEXR/IlmImf/ImfPxr24Compressor.cpp
		Source/OpenEXR/IlmImf/ImfPxr24Compressor.h
		Source/OpenEXR/IlmImf/ImfRational.cpp
		Source/OpenEXR/IlmImf/ImfRational.h
		Source/OpenEXR/IlmImf/ImfRationalAttribute.cpp
		Source/OpenEXR/IlmImf/ImfRationalAttribute.h
		Source/OpenEXR/IlmImf/ImfRgba.h
		Source/OpenEXR/IlmImf/ImfRgbaFile.cpp
		Source/OpenEXR/IlmImf/ImfRgbaFile.h
		Source/OpenEXR/IlmImf/ImfRgbaYca.cpp
		Source/OpenEXR/IlmImf/ImfRgbaYca.h
		Source/OpenEXR/IlmImf/ImfRle.cpp
		Source/OpenEXR/IlmImf/ImfRle.h
		Source/OpenEXR/IlmImf/ImfRleCompressor.cpp
		Source/OpenEXR/IlmImf/ImfRleCompressor.h
		Source/OpenEXR/IlmImf/ImfScanLineInputFile.cpp
		Source/OpenEXR/IlmImf/ImfScanLineInputFile.h
		Source/OpenEXR/IlmImf/ImfSimd.h
		Source/OpenEXR/IlmImf/ImfStandardAttributes.cpp
		Source/OpenEXR/IlmImf/ImfStandardAttributes.h
		Source/OpenEXR/IlmImf/ImfStdIO.cpp
		Source/OpenEXR/IlmImf/ImfStdIO.h
		Source/OpenEXR/IlmImf/ImfStringAttribute.cpp
		Source/OpenEXR/IlmImf/ImfStringAttribute.h
		Source/OpenEXR/IlmImf/ImfStringVectorAttribute.cpp
		Source/OpenEXR/IlmImf/ImfStringVectorAttribute.h
		Source/OpenEXR/IlmImf/ImfSystemSpecific.cpp
		Source/OpenEXR/IlmImf/ImfSystemSpecific.h
		Source/OpenEXR/IlmImf/ImfTestFile.cpp
		Source/OpenEXR/IlmImf/ImfTestFile.h
		Source/OpenEXR/IlmImf/ImfThreading.cpp
		Source/OpenEXR/IlmImf/ImfThreading.h
		Source/OpenEXR/IlmImf/ImfTileDescription.h
		Source/OpenEXR/IlmImf/ImfTileDescriptionAttribute.cpp
		Source/OpenEXR/IlmImf/ImfTileDescriptionAttribute.h
		Source/OpenEXR/IlmImf/ImfTiledInputFile.cpp
		Source/OpenEXR/IlmImf/ImfTiledInputFile.h
		Source/OpenEXR/IlmImf/ImfTiledInputPart.cpp
		Source/OpenEXR/IlmImf/ImfTiledInputPart.h
		Source/OpenEXR/IlmImf/ImfTiledMisc.cpp
		Source/OpenEXR/IlmImf/ImfTiledMisc.h
		Source/OpenEXR/IlmImf/ImfTiledOutputFile.cpp
		Source/OpenEXR/IlmImf/ImfTiledOutputFile.h
		Source/OpenEXR/IlmImf/ImfTiledOutputPart.cpp
		Source/OpenEXR/IlmImf/ImfTiledOutputPart.h
		Source/OpenEXR/IlmImf/ImfTiledRgbaFile.cpp
		Source/OpenEXR/IlmImf/ImfTiledRgbaFile.h
		Source/OpenEXR/IlmImf/ImfTileOffsets.cpp
		Source/OpenEXR/IlmImf/ImfTileOffsets.h
		Source/OpenEXR/IlmImf/ImfTimeCode.cpp
		Source/OpenEXR/IlmImf/ImfTimeCode.h
		Source/OpenEXR/IlmImf/ImfTimeCodeAttribute.cpp
		Source/OpenEXR/IlmImf/ImfTimeCodeAttribute.h
		Source/OpenEXR/IlmImf/ImfVecAttribute.cpp
		Source/OpenEXR/IlmImf/ImfVecAttribute.h
		Source/OpenEXR/IlmImf/ImfVersion.cpp
		Source/OpenEXR/IlmImf/ImfVersion.h
		Source/OpenEXR/IlmImf/ImfWav.cpp
		Source/OpenEXR/IlmImf/ImfWav.h
		Source/OpenEXR/IlmImf/ImfXdr.h
		Source/OpenEXR/IlmImf/ImfZip.cpp
		Source/OpenEXR/IlmImf/ImfZip.h
		Source/OpenEXR/IlmImf/ImfZipCompressor.cpp
		Source/OpenEXR/IlmImf/ImfZipCompressor.h
		Source/OpenEXR/IlmThread/IlmThread.cpp
		Source/OpenEXR/IlmThread/IlmThread.h
		Source/OpenEXR/IlmThread/IlmThreadExport.h
		Source/OpenEXR/IlmThread/IlmThreadForward.h
		Source/OpenEXR/IlmThread/IlmThreadMutex.cpp
		Source/OpenEXR/IlmThread/IlmThreadMutex.h
		Source/OpenEXR/IlmThread/IlmThreadNamespace.h
		Source/OpenEXR/IlmThread/IlmThreadPool.cpp
		Source/OpenEXR/IlmThread/IlmThreadPool.h
		Source/OpenEXR/IlmThread/IlmThreadPosix.cpp
		Source/OpenEXR/IlmThread/IlmThreadSemaphore.cpp
		Source/OpenEXR/IlmThread/IlmThreadSemaphore.h
		Source/OpenEXR/Imath/ImathBoxAlgo.h
		Source/OpenEXR/Imath/ImathColor.h
		Source/OpenEXR/Imath/ImathColorAlgo.cpp
		Source/OpenEXR/Imath/ImathColorAlgo.h
		Source/OpenEXR/Imath/ImathEuler.h
		Source/OpenEXR/Imath/ImathExc.h
		Source/OpenEXR/Imath/ImathExport.h
		Source/OpenEXR/Imath/ImathForward.h
		Source/OpenEXR/Imath/ImathFrame.h
		Source/OpenEXR/Imath/ImathFrustum.h
		Source/OpenEXR/Imath/ImathFrustumTest.h
		Source/OpenEXR/Imath/ImathFun.cpp
		Source/OpenEXR/Imath/ImathFun.h
		Source/OpenEXR/Imath/ImathGL.h
		Source/OpenEXR/Imath/ImathGLU.h
		Source/OpenEXR/Imath/ImathHalfLimits.h
		Source/OpenEXR/Imath/ImathInt64.h
		Source/OpenEXR/Imath/ImathInterval.h
		Source/OpenEXR/Imath/ImathLimits.h
		Source/OpenEXR/Imath/ImathLine.h
		Source/OpenEXR/Imath/ImathLineAlgo.h
		Source/OpenEXR/Imath/ImathMath.h
		Source/OpenEXR/Imath/ImathMatrix.h
		Source/OpenEXR/Imath/ImathMatrixAlgo.cpp
		Source/OpenEXR/Imath/ImathMatrixAlgo.h
		Source/OpenEXR/Imath/ImathNamespace.h
		Source/OpenEXR/Imath/ImathPlane.h
		Source/OpenEXR/Imath/ImathPlatform.h
		Source/OpenEXR/Imath/ImathQuat.h
		Source/OpenEXR/Imath/ImathRandom.cpp
		Source/OpenEXR/Imath/ImathRandom.h
		Source/OpenEXR/Imath/ImathRoots.h
		Source/OpenEXR/Imath/ImathSphere.h
		Source/OpenEXR/Imath/ImathVec.cpp
		Source/OpenEXR/Imath/ImathVec.h
		Source/OpenEXR/Imath/ImathVecAlgo.h
	)
else()
	set(FreeImage_SOURCES ${FreeImage_SOURCES} Source/Dummy/PluginDummyEXR.cpp	 )
endif()

if(BUILD_PLUGIN_G3)
	set(FreeImage_SOURCES ${FreeImage_SOURCES} Source/FreeImage/PluginG3.cpp	 )
else()
	set(FreeImage_SOURCES ${FreeImage_SOURCES} Source/Dummy/PluginDummyG3.cpp	 )
endif()

    set(FreeImage_SOURCES ${FreeImage_SOURCES} Source/FreeImage/PluginGIF.cpp	 )

if(BUILD_PLUGIN_HDR)
	set(FreeImage_SOURCES ${FreeImage_SOURCES} Source/FreeImage/PluginHDR.cpp	 )
else()
	set(FreeImage_SOURCES ${FreeImage_SOURCES} Source/Dummy/PluginDummyHDR.cpp	 )
endif()

if(BUILD_PLUGIN_ICO)
	set(FreeImage_SOURCES ${FreeImage_SOURCES} Source/FreeImage/PluginICO.cpp	 )
else()
	set(FreeImage_SOURCES ${FreeImage_SOURCES} Source/Dummy/PluginDummyICO.cpp	 )
endif()

if(BUILD_PLUGIN_IFF)
	set(FreeImage_SOURCES ${FreeImage_SOURCES} Source/FreeImage/PluginIFF.cpp	 )
else()
	set(FreeImage_SOURCES ${FreeImage_SOURCES} Source/Dummy/PluginDummyIFF.cpp	 )
endif()

    set(FreeImage_SOURCES ${FreeImage_SOURCES} Source/FreeImage/PluginJ2K.cpp	 )
    set(FreeImage_SOURCES ${FreeImage_SOURCES} Source/FreeImage/PluginJNG.cpp	 )
    set(FreeImage_SOURCES ${FreeImage_SOURCES} Source/FreeImage/PluginJP2.cpp	 )
    set(FreeImage_SOURCES ${FreeImage_SOURCES} Source/FreeImage/PluginJPEG.cpp	 )

if(BUILD_PLUGIN_JXR)
	set(FreeImage_SOURCES ${FreeImage_SOURCES} Source/FreeImage/PluginJXR.cpp	 )
else()
	set(FreeImage_SOURCES ${FreeImage_SOURCES} Source/Dummy/PluginDummyJXR.cpp	 )
endif()

if(BUILD_PLUGIN_KOALA)
	set(FreeImage_SOURCES ${FreeImage_SOURCES} Source/FreeImage/PluginKOALA.cpp	 )
else()
	set(FreeImage_SOURCES ${FreeImage_SOURCES} Source/Dummy/PluginDummyKOALA.cpp	 )
endif()

    set(FreeImage_SOURCES ${FreeImage_SOURCES} Source/FreeImage/PluginMNG.cpp	 )
    set(FreeImage_SOURCES ${FreeImage_SOURCES} Source/FreeImage/PluginPCD.cpp	 )
    set(FreeImage_SOURCES ${FreeImage_SOURCES} Source/FreeImage/PluginPCX.cpp	 )
    set(FreeImage_SOURCES ${FreeImage_SOURCES} Source/FreeImage/PluginPFM.cpp	 )

if(BUILD_PLUGIN_PICT)
	set(FreeImage_SOURCES ${FreeImage_SOURCES} Source/FreeImage/PluginPICT.cpp	 )
else()
	set(FreeImage_SOURCES ${FreeImage_SOURCES} Source/Dummy/PluginDummyPICT.cpp	 )
endif()

    set(FreeImage_SOURCES ${FreeImage_SOURCES} Source/FreeImage/PluginPNG.cpp	 )
    set(FreeImage_SOURCES ${FreeImage_SOURCES} Source/FreeImage/PluginPNM.cpp	 )
    set(FreeImage_SOURCES ${FreeImage_SOURCES} Source/FreeImage/PluginPSD.cpp	 )
    set(FreeImage_SOURCES ${FreeImage_SOURCES} Source/FreeImage/PluginRAS.cpp	 )
    set(FreeImage_SOURCES ${FreeImage_SOURCES} Source/FreeImage/PluginSGI.cpp	 )
    set(FreeImage_SOURCES ${FreeImage_SOURCES} Source/FreeImage/PluginTARGA.cpp	 )

if(BUILD_PLUGIN_TIFF)
	set(FreeImage_SOURCES ${FreeImage_SOURCES} 
		Source/FreeImage/PluginTIFF.cpp
		Source/Metadata/XTIFF.cpp
	)
else()
	set(FreeImage_SOURCES ${FreeImage_SOURCES} Source/Dummy/PluginDummyTIFF.cpp	 )
endif()

    set(FreeImage_SOURCES ${FreeImage_SOURCES} Source/FreeImage/PluginWBMP.cpp	 )
    set(FreeImage_SOURCES ${FreeImage_SOURCES} Source/FreeImage/PluginWebP.cpp	 )

if(BUILD_PLUGIN_RAW)
	set(FreeImage_SOURCES ${FreeImage_SOURCES} 
		Source/FreeImage/PluginRAW.cpp	 
		Source/LibRawLite/dcraw/dcraw.c
		Source/LibRawLite/internal/dcb_demosaicing.c
		Source/LibRawLite/internal/aahd_demosaic.cpp
		Source/LibRawLite/internal/dcraw_common.cpp
		Source/LibRawLite/internal/dcraw_fileio.cpp
		Source/LibRawLite/internal/libraw_x3f.cpp
		Source/LibRawLite/internal/demosaic_packs.cpp
		Source/LibRawLite/internal/dht_demosaic.cpp
		Source/LibRawLite/internal/wf_filtering.cpp
		Source/LibRawLite/internal/defines.h
		Source/LibRawLite/internal/var_defines.h
		Source/LibRawLite/internal/libraw_internal_funcs.h
		Source/LibRawLite/libraw/libraw_alloc.h
		Source/LibRawLite/libraw/libraw_const.h
		Source/LibRawLite/libraw/libraw_datastream.h
		Source/LibRawLite/libraw/libraw_internal.h
		Source/LibRawLite/libraw/libraw_types.h
		Source/LibRawLite/libraw/libraw_version.h
		Source/LibRawLite/libraw/libraw.h
		Source/LibRawLite/src/libraw_c_api.cpp
		Source/LibRawLite/src/libraw_datastream.cpp
		Source/LibRawLite/src/libraw_cxx.cpp
	)
	include_directories(Source/LibRawLite)
else()
	set(FreeImage_SOURCES ${FreeImage_SOURCES} Source/Dummy/PluginDummyRAW.cpp	 )
endif()

    set(FreeImage_SOURCES ${FreeImage_SOURCES} Source/FreeImage/PluginXBM.cpp	 )
    set(FreeImage_SOURCES ${FreeImage_SOURCES} Source/FreeImage/PluginXPM.cpp	 )

# need include directories for FreeImage and all the sub libs
include_directories(Source)
include_directories(Source/DeprecationManager)
include_directories(Source/FreeImage)
include_directories(Source/FreeImageLib)
include_directories(Source/FreeImageToolkit)
include_directories(Source/LibJPEG)
include_directories(Source/LibJXR)
include_directories(Source/LibJXR/jxrgluelib)
include_directories(Source/LibJXR/image/sys)
include_directories(Source/LibOpenJPEG)
include_directories(Source/LibPNG)
include_directories(Source/LibTIFF4)
include_directories(Source/LibWebP)
include_directories(Source/Metadata)
include_directories(Source/OpenEXR)
include_directories(Source/OpenEXR/Half)
include_directories(Source/OpenEXR/Iex)
include_directories(Source/OpenEXR/IexMath)
include_directories(Source/OpenEXR/IlmImf)
include_directories(Source/OpenEXR/Imath)
include_directories(Source/OpenEXR/IlmThread)
include_directories(Source/ZLib)

if (ANDROID)
	include_directories(${ANDROID_NDK}/sources/android/cpufeatures)
	add_definitions(-DPNG_ARM_NEON_OPT=0)
endif()

if(OGRE_BUILD_PLATFORM_APPLE_IOS)
	add_definitions(-DPNG_ARM_NEON_OPT=0)
endif()

add_definitions(-DOPJ_STATIC -DLIBRAW_NODLL -DLIBRAW_LIBRARY_BUILD -DNO_LCMS)
if(OGREDEPS_BUILD_FREEIMAGE_DYNAMIC)
	if (ANDROID)
		set(FreeImage_SOURCES ${FreeImage_SOURCES} ${ANDROID_NDK}/sources/android/cpufeatures/cpu-features.c)
	endif()
	add_definitions(-DFREEIMAGE_EXPORTS)
	add_library(FreeImage SHARED ${FreeImage_SOURCES})
	if(ANDROID)
		target_link_libraries(FreeImage m)
	endif()
else()
	add_definitions(-DFREEIMAGE_LIB)
	add_library(FreeImage STATIC ${FreeImage_SOURCES})
endif()
install_dep(FreeImage include Source/FreeImage.h)

if (APPLE)
 set_target_properties(FreeImage PROPERTIES XCODE_ATTRIBUTE_ONLY_ACTIVE_ARCH "NO")

 if(OGRE_BUILD_PLATFORM_APPLE_IOS)
  set_target_properties(FreeImage PROPERTIES XCODE_ATTRIBUTE_GCC_THUMB_SUPPORT "NO")
 endif()
endif()

set(FreeImage_INCLUDE_DIR "${FreeImage_SOURCE_DIR}/Source" CACHE PATH "" FORCE)
set(FreeImage_LIBRARY_DBG FreeImage CACHE STRING "" FORCE)
set(FreeImage_LIBRARY_REL FreeImage CACHE STRING "" FORCE)
mark_as_advanced(FreeImage_INCLUDE_DIR FreeImage_LIBRARY_DBG FreeImage_LIBRARY_REL)
