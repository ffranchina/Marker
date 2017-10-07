#ifndef __MARKER_PREVIEW_H__
#define __MARKER_PREVIEW_H__

#include <webkit2/webkit2.h>

G_BEGIN_DECLS

#define MARKER_TYPE_PREVIEW (marker_preview_get_type ())

G_DECLARE_FINAL_TYPE(MarkerPreview,
                     marker_preview,
                     MARKER,
                     PREVIEW,
                     WebKitWebView)

MarkerPreview*
marker_preview_new(void);

void
marker_preview_render_markdown(MarkerPreview* preview,
                               const char*    markdown,
                               const char*    css_theme,
                               const char*    base_uri);

void
marker_preview_update_scroll_pos(MarkerPreview* web_view);

void
marker_preview_scroll_to_pos(MarkerPreview* preview, gdouble x, gdouble y);

G_END_DECLS

#endif
