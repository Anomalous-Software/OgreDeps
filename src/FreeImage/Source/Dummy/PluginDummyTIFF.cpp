//// ==========================================================
//// TIFF Loader and Writer
////
//// Design and implementation by 
//// - Floris van den Berg (flvdberg@wxs.nl)
//// - Hervé Drolon (drolon@infonie.fr)
//// - Markus Loibl (markus.loibl@epost.de)
//// - Luca Piergentili (l.pierge@terra.es)
//// - Detlev Vendt (detlev.vendt@brillit.de)
//// - Mihail Naydenov (mnaydenov@users.sourceforge.net)
////
//// This file is part of FreeImage 3
////
//// COVERED CODE IS PROVIDED UNDER THIS LICENSE ON AN "AS IS" BASIS, WITHOUT WARRANTY
//// OF ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING, WITHOUT LIMITATION, WARRANTIES
//// THAT THE COVERED CODE IS FREE OF DEFECTS, MERCHANTABLE, FIT FOR A PARTICULAR PURPOSE
//// OR NON-INFRINGING. THE ENTIRE RISK AS TO THE QUALITY AND PERFORMANCE OF THE COVERED
//// CODE IS WITH YOU. SHOULD ANY COVERED CODE PROVE DEFECTIVE IN ANY RESPECT, YOU (NOT
//// THE INITIAL DEVELOPER OR ANY OTHER CONTRIBUTOR) ASSUME THE COST OF ANY NECESSARY
//// SERVICING, REPAIR OR CORRECTION. THIS DISCLAIMER OF WARRANTY CONSTITUTES AN ESSENTIAL
//// PART OF THIS LICENSE. NO USE OF ANY COVERED CODE IS AUTHORIZED HEREUNDER EXCEPT UNDER
//// THIS DISCLAIMER.
////
//// Use at your own risk!
//// ==========================================================

#include "FreeImage.h"
#include "Utilities.h"
#include "../Metadata/FreeImageTag.h"

// ==========================================================
// Plugin Interface
// ==========================================================

static int s_format_id;

// ==========================================================
// Plugin Implementation
// ==========================================================

static const char * DLL_CALLCONV
Format() {
	return "TIFF";
}

static const char * DLL_CALLCONV
Description() {
	return "Tagged Image File Format";
}

static const char * DLL_CALLCONV
Extension() {
	return "tif,tiff";
}

static const char * DLL_CALLCONV
RegExpr() {
	return NULL;
}

static const char * DLL_CALLCONV
MimeType() {
	return "image/tiff";
}

static BOOL
HasMagicHeader(FreeImageIO *io, fi_handle handle) {
	return FALSE;
}

static BOOL DLL_CALLCONV
Validate(FreeImageIO *io, fi_handle handle) {
	return FALSE;
}

static BOOL DLL_CALLCONV
SupportsExportDepth(int depth) {
	return FALSE;
}

static BOOL DLL_CALLCONV
SupportsExportType(FREE_IMAGE_TYPE type) {
	return FALSE;
}

static BOOL DLL_CALLCONV
SupportsICCProfiles() {
	return TRUE;
}

static BOOL DLL_CALLCONV
SupportsNoPixels() {
	return TRUE;
}

// ----------------------------------------------------------

static FIBITMAP * DLL_CALLCONV
Load(FreeImageIO *io, fi_handle handle, int page, int flags, void *data) {
	return NULL;
}

// ==========================================================
//   Init
// ==========================================================

void DLL_CALLCONV
InitTIFF(Plugin *plugin, int format_id) {
	s_format_id = format_id;

	plugin->format_proc = Format;
	plugin->description_proc = Description;
	plugin->extension_proc = Extension;
	plugin->regexpr_proc = RegExpr;
	plugin->open_proc = NULL;
	plugin->close_proc = NULL;
	plugin->pagecount_proc = NULL;
	plugin->pagecapability_proc = NULL;
	plugin->load_proc = Load;
	plugin->save_proc = NULL;
	plugin->validate_proc = Validate;
	plugin->mime_proc = MimeType;
	plugin->supports_export_bpp_proc = SupportsExportDepth;
	plugin->supports_export_type_proc = SupportsExportType;
	plugin->supports_icc_profiles_proc = SupportsICCProfiles;
	plugin->supports_no_pixels_proc = SupportsNoPixels;
}
