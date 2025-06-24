static const char norm_fg[] = "#D4BE98";
static const char norm_bg[] = "#282828";
static const char norm_border[] = "#725d5d";

static const char sel_fg[] = "#D4BE98";
static const char sel_bg[] = "#D95222";
static const char sel_border[] = "#D4BE98";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
};
