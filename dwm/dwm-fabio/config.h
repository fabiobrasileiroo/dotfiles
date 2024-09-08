// ANSI Shadow
// ███████╗ █████╗ ██████╗ ██╗ ██████╗  
// ██╔════╝██╔══██╗██╔══██╗██║██╔═══██╗
// █████╗  ███████║██████╔╝██║██║   ██║ Fabio Brasileiro
// ██╔══╝  ██╔══██║██╔══██╗██║██║   ██║ https://github.com/fabiobrasileiroo 
// ██║     ██║  ██║██████╔╝██║╚██████╔╝
// ╚═╝     ╚═╝  ╚═╝╚═════╝ ╚═╝ ╚═════╝ 
                                    


/* See LICENSE file for copyright and license details. */

//  █████╗ ██████╗ ██████╗ ███████╗██████╗  █████╗ ███╗   ██╗ ██████╗███████╗
// ██╔══██╗██╔══██╗██╔══██╗██╔════╝██╔══██╗██╔══██╗████╗  ██║██╔════╝██╔════╝
// ███████║██████╔╝██████╔╝█████╗  ██████╔╝███████║██╔██╗ ██║██║     █████╗  
// ██╔══██║██╔═══╝ ██╔═══╝ ██╔══╝  ██╔══██╗██╔══██║██║╚██╗██║██║     ██╔══╝  
// ██║  ██║██║     ██║     ███████╗██║  ██║██║  ██║██║ ╚████║╚██████╗███████╗
// ╚═╝  ╚═╝╚═╝     ╚═╝     ╚══════╝╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═══╝ ╚═════╝╚══════╝
                                                                         
static const unsigned int borderpx    = 4;        /* border pixel of windows */
static const unsigned int snap        = 8;       /* snap pixel */
static const int swallowfloating      = 0;        /* 1 means swallow floating windows by default */
static const unsigned int gappx       = 0;        /* pixel gap between clients */
static const int showbar              = 1;        /* 0 means no bar */
static const int topbar               = 1;        /* 1 means top bar */
static const int horizpadbar          = 0;        /* horizontal padding for statusbar */
static const int vertpadbar           = 0;        /* vertical padding for statusbar */

/* Fantasque Sans Mono Font must be installed from standard Arch repo.
 * Otherwise, your default font will be Hack which is found in the standard
 * Arch repos and is listed as a dependency for this build. JoyPixels is also
 * a hard dependency and makes colored fonts and emojis possible.
 */
static const char *fonts[]            = {"Agave Nerd Font:size=10:antialias=true:autohint=true",
                                         "Hack:size=8:antialias=true:autohint=true",
                                         "JoyPixels:size=10:antialias=true:autohint=true"
										};

/* 
██████╗  █████╗ ██████╗      ██████╗ ██████╗  █████╗  ██████╗██╗████████╗██╗   ██╗    
██╔══██╗██╔══██╗██╔══██╗    ██╔═══██╗██╔══██╗██╔══██╗██╔════╝██║╚══██╔══╝╚██╗ ██╔╝    
██████╔╝███████║██████╔╝    ██║   ██║██████╔╝███████║██║     ██║   ██║    ╚████╔╝     
██╔══██╗██╔══██║██╔══██╗    ██║   ██║██╔═══╝ ██╔══██║██║     ██║   ██║     ╚██╔╝      
██████╔╝██║  ██║██║  ██║    ╚██████╔╝██║     ██║  ██║╚██████╗██║   ██║      ██║       
╚═════╝ ╚═╝  ╚═╝╚═╝  ╚═╝     ╚═════╝ ╚═╝     ╚═╝  ╚═╝ ╚═════╝╚═╝   ╚═╝      ╚═╝       
                                                                               
 * 0xff is no transparency.
 * 0xee adds wee bit of transparency.
 * Play with the value to get desired transparency.
 */
/* Transparência */
static const unsigned int baralpha    = 0xff;
static const unsigned int borderalpha = OPAQUE;

static const char fg[]         = "#00ffdf";
static const char bg[]         = "#000000";
static const char acc[]        = "#F25AD8";  // Roxo vibrante (Cyberpunk-3)
static const char border[]     = "#366275";  // Azul (Cyberpunk-1)
static const char statusbg[]   = "#EF4840";  // Vermelho (Cyberpunk-4)


static const char *colors[][3]      = {
	/*                   fg  bg   border */
	[SchemeNorm]     = { fg, bg,  bg  },
	[SchemeSel]      = { bg, "#00ffdf", "#00ffdf" },
	[SchemeStatus]   = { fg, bg,  "#ff0000"  }, // Statusbar right
	[SchemeTagsSel]  = { fg, acc, "#787572"  }, // Tagbar left selected
	[SchemeTagsNorm] = { fg, bg,  "#000000"  }, // Tagbar left unselected
	[SchemeInfoSel]  = { fg, bg,  "#00ffdf"  }, // infobar middle  selected
	[SchemeInfoNorm] = { fg, bg,  "#000000"  }, // infobar middle  unselected
};
static const unsigned int alphas[][3] = {
	/*               fg      bg        border     */
	[SchemeNorm] = { OPAQUE, baralpha, borderalpha },
	[SchemeSel]  = { OPAQUE, baralpha, borderalpha },
};



// ████████╗ █████╗  ██████╗  ██████╗ ██╗███╗   ██╗ ██████╗ 
// ╚══██╔══╝██╔══██╗██╔════╝ ██╔════╝ ██║████╗  ██║██╔════╝ 
//    ██║   ███████║██║  ███╗██║  ███╗██║██╔██╗ ██║██║  ███╗
//    ██║   ██╔══██║██║   ██║██║   ██║██║██║╚██╗██║██║   ██║
//    ██║   ██║  ██║╚██████╔╝╚██████╔╝██║██║ ╚████║╚██████╔╝
//    ╚═╝   ╚═╝  ╚═╝ ╚═════╝  ╚═════╝ ╚═╝╚═╝  ╚═══╝ ╚═════╝ 
                                                         
static const char *tags[] = { "", "", "󰖟", "", };
/* static const char *tags[] = { "", "", "", "", "", "", "", "", "" }; */


static const Rule rules[] = {
	/* xprop(1):
	 *	WM_CLASS(STRING) = instance, class
	 *	WM_NAME(STRING) = title
	 */
	/* class     instance  title           tags mask  isfloating  isterminal  noswallow  monitor */
	/*{ "Gimp",    NULL,     NULL,           0,         1,          0,           0,        -1 },*/
	{ "R_x11",    NULL,     NULL,           0,         1,          0,           1,        -1 },
	{ "gnuplot_qt",    NULL,     NULL,           0,         1,          0,           1,        -1 },
	{ "Firefox", NULL,     NULL,           1 << 8,    0,          0,          -1,        -1 },
	{ "st-256color",      NULL,     NULL,           0,         0,          1,           0,        -1 },
	{ "Eclipse",      NULL,     NULL, 0,         0,          0,           1,        -1 }, /* xev */
};

#include <X11/XF86keysym.h>

/* Layout(s) */
static const float mfact     = 0.50; /* factor of master area size [0.05..0.95] */
static const int nmaster     = 1;    /* number of clients in master area */
static const int resizehints = 0;    /* 1 means respect size hints in tiled resizals */

#include "layouts.c"
static const Layout layouts[] = {
	/* symbol     arrange function */
	{ "[]=",      tile },    /* first entry is default */
	{ "><>",      NULL },    /* no layout function means floating behavior */
	{ "[M]",      monocle },
	{ "HHH",      grid },
	{ NULL,       NULL },
};

/* Key definitions */
#define MODKEY Mod4Mask  
#define ALT Mod1Mask

/* Trocar de tela */
#define TAGKEYS(KEY,TAG) \
	{ MODKEY,                       KEY,      view,           {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask,           KEY,      toggleview,     {.ui = 1 << TAG} }, \
	{ MODKEY|ShiftMask,             KEY,      tag,            {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask|ShiftMask, KEY,      toggletag,      {.ui = 1 << TAG} },

#define CMD(cmd) { .v = (const char*[]){ "/bin/sh", "-c", cmd, NULL } }


/* Helper for spawning shell commands in the pre dwm-5.0 fashion */
#define SHCMD(cmd) { .v = (const char*[]){ "/bin/sh", "-c", cmd, NULL } }

/* Commands */
static char dmenumon[2] = "0"; /* component of dmenucmd, manipulated in spawn() */
static const char *dmenucmd[]    = { "dmenu_run","-i", "-p", "Run: ", NULL };
/* An alternative way to launch st along with the fish shell */
static const char *termcmd[]     = { "st", "-e fish", NULL }; 
/*static const char *termcmd[]     = { "st", NULL };*/
static const char *browcmd[]     = {"firefox","-e",NULL};
static const char *browcmd2[]     = {"google-chrome-stable","-e",NULL};
static const char *rangercmd[] = {"st", "-e", "ranger" };
static const char *codecmd[]     = {"code",NULL};
/*static const char *tabtermcmd[]  = { "tabbed", "-r 2", "st", "-w", "''", NULL };*/
  /*static const char *slockcmd[]    = { "st","systemctl suspend","NULL" };*/

static Key keys[] = {
	/* modifier             key        function        argument */
	{ MODKEY,               XK_d,      spawn,          {.v = dmenucmd } },
	{ MODKEY,               XK_Return, spawn,          {.v = termcmd } },
	{ MODKEY,             	XK_f, 	   spawn,          {.v = browcmd } },
	{ MODKEY,    		XK_c,      spawn,          {.v = codecmd } }, 		
	{ MODKEY|ShiftMask,    	XK_c,      spawn,          {.v = browcmd2 } }, 		
	{ MODKEY,		XK_v,      spawn,	    {.v = rangercmd} },			
	{ MODKEY,               XK_b,      togglebar,      {0} },
	{ MODKEY|ShiftMask,     XK_j,      rotatestack,    {.i = +1 } },
	{ MODKEY|ShiftMask,     XK_k,      rotatestack,    {.i = -1 } },
	{ MODKEY,               XK_j,      focusstack,     {.i = +1 } },
	{ MODKEY,               XK_k,      focusstack,     {.i = -1 } },
	{ MODKEY|ShiftMask,     XK_i,      incnmaster,     {.i = +1 } },
	{ MODKEY|ShiftMask,     XK_d,      incnmaster,     {.i = -1 } },
	{ MODKEY,               XK_h,      setmfact,       {.f = -0.05} },
	{ MODKEY,               XK_l,      setmfact,       {.f = +0.05} },
	{ MODKEY|ShiftMask,     XK_Return, zoom,           {0} },
	{ MODKEY,               XK_Tab,    view,           {0} },
	{ MODKEY|ShiftMask,     XK_q,      killclient,     {0} },
	{ MODKEY|ShiftMask,                    XK_z,      spawn,          SHCMD("~/Scripts/dmenu-power") },
	/*{ ShiftMask,                    XK_m,      spawn,          SHCMD("~/Scripts/volume+") },
	{ ShiftMask,                    XK_n,      spawn,          SHCMD("~/Scripts/volume-") },*/
    	/*{ MODKEY,               XK_z,      spawn,          SHCMD("sleep 1s; scrot -s ~/Imagens/Screens hots/%Y-%-m%d_$wx$h_ss.png -e 'xclip -selection clipboard -target image/png < $f'") }, */
	{ MODKEY, XK_z, spawn, SHCMD("sleep 1s; gnome-screenshot -a -f ~/Imagens/%Y-%m%d_$wx$h_gnome.png") },



    /* Layout manipulation */
	{ MODKEY,               XK_Tab,    cyclelayout,    {.i = -1 } },
	{ MODKEY|ShiftMask,     XK_Tab,    cyclelayout,    {.i = +1 } },
	{ MODKEY,               XK_space,  setlayout,      {0} },
	{ MODKEY|ShiftMask,     XK_space,  togglefloating, {0} },

    /* Switch to specific layouts */
	{ MODKEY,               XK_t,      setlayout,      {.v = &layouts[0]} },
	{ MODKEY,               XK_f,      setlayout,      {.v = &layouts[1]} },
	{ MODKEY,               XK_m,      setlayout,      {.v = &layouts[2]} },
	{ MODKEY,               XK_g,      setlayout,      {.v = &layouts[3]} },

	{ MODKEY,               XK_0,      view,           {.ui = ~0 } },
	{ MODKEY|ShiftMask,     XK_0,      tag,            {.ui = ~0 } },

    /* Switching between monitors */
	{ MODKEY,               XK_comma,  focusmon,       {.i = -1 } },
	{ MODKEY,               XK_period, focusmon,       {.i = +1 } },
	{ MODKEY|ShiftMask,     XK_comma,  tagmon,         {.i = -1 } },
	{ MODKEY|ShiftMask,     XK_period, tagmon,         {.i = +1 } },
	
	TAGKEYS(                  XK_1,          0)
	TAGKEYS(                  XK_2,          1)
	TAGKEYS(                  XK_3,          2)
	TAGKEYS(                  XK_4,          3)

	// TAGKEYS2(                  XK_1,          0)
	// TAGKEYS2(                  XK_2,          1)
	// TAGKEYS2(                  XK_3,          2)
	// TAGKEYS2(                  XK_4,          3)

/*	TAGKEYS(                  XK_5,          4)
	TAGKEYS(                  XK_6,          5)
	TAGKEYS(                  XK_7,          6)
	TAGKEYS(                  XK_8,          7)
	TAGKEYS(                  XK_9,          8)*/
	{ MODKEY|ShiftMask,       XK_e,	   quit,		   {0} },
        { MODKEY|ShiftMask,       	  XK_r,    quit,           {1} }, 
    /*{ MODKEY|ShiftMask,       XK_x,    spawn,          {.v = slockcmd } },*/


    /* ------------------------------------- */
    /* Agora as mesma teclas com Mod1Mask */
    /* ------------------------------------- */


	/* modifier             key        function        argument */
	{ ALT,               	XK_d,      spawn,          {.v = dmenucmd } },
	{ ALT,               	XK_Return, spawn,          {.v = termcmd } },
	{ ALT,             	XK_f, 	   spawn,          {.v = browcmd } },
	{ ALT,    		XK_c,      spawn,          {.v = codecmd } }, 		
	{ ALT|ShiftMask,    	XK_c,      spawn,          {.v = browcmd2 } }, 		
	{ ALT,			XK_v,      spawn,	    {.v = rangercmd} },			
	{ ALT,               XK_b,      togglebar,      {0} },
	{ ALT|ShiftMask,     XK_j,      rotatestack,    {.i = +1 } },
	{ ALT|ShiftMask,     XK_k,      rotatestack,    {.i = -1 } },
	{ ALT,               XK_j,      focusstack,     {.i = +1 } },
	{ ALT,               XK_k,      focusstack,     {.i = -1 } },
	{ ALT|ShiftMask,     XK_i,      incnmaster,     {.i = +1 } },
	{ ALT|ShiftMask,     XK_d,      incnmaster,     {.i = -1 } },
	{ ALT,               XK_h,      setmfact,       {.f = -0.05} },
	{ ALT,               XK_l,      setmfact,       {.f = +0.05} },
	{ ALT|ShiftMask,     XK_Return, zoom,           {0} },
	{ ALT,               XK_Tab,    view,           {0} },
	{ ALT|ShiftMask,     XK_q,      killclient,     {0} },
	{ ALT|ShiftMask,                    XK_z,      spawn,          SHCMD("~/Scripts/dmenu-power") },
	/*{ ShiftMask,                    XK_m,      spawn,          SHCMD("~/Scripts/volume+") },
	{ ShiftMask,                    XK_n,      spawn,          SHCMD("~/Scripts/volume-") },*/
    	/*{ MODKEY,               XK_z,      spawn,          SHCMD("sleep 1s; scrot -s ~/Imagens/Screens hots/%Y-%-m%d_$wx$h_ss.png -e 'xclip -selection clipboard -target image/png < $f'") }, */
	{ ALT, XK_z, spawn, SHCMD("sleep 1s; gnome-screenshot -a -f ~/Imagens/%Y-%m%d_$wx$h_gnome.png") },



    /* Layout manipulation */
	{ ALT,               XK_Tab,    cyclelayout,    {.i = -1 } },
	{ ALT|ShiftMask,     XK_Tab,    cyclelayout,    {.i = +1 } },
	{ ALT,               XK_space,  setlayout,      {0} },
	{ ALT|ShiftMask,     XK_space,  togglefloating, {0} },

    /* Switch to specific layouts */
	{ ALT,               XK_t,      setlayout,      {.v = &layouts[0]} },
	{ ALT,               XK_f,      setlayout,      {.v = &layouts[1]} },
	{ ALT,               XK_m,      setlayout,      {.v = &layouts[2]} },
	{ ALT,               XK_g,      setlayout,      {.v = &layouts[3]} },

	{ ALT,               XK_0,      view,           {.ui = ~0 } },
	{ ALT|ShiftMask,     XK_0,      tag,            {.ui = ~0 } },

    /* Switching between monitors */
	{ ALT,               XK_comma,  focusmon,       {.i = -1 } },
	{ ALT,               XK_period, focusmon,       {.i = +1 } },
	{ ALT|ShiftMask,     XK_comma,  tagmon,         {.i = -1 } },
	{ ALT|ShiftMask,     XK_period, tagmon,         {.i = +1 } },
	

    /* Reset windows */	
	{ ALT|ShiftMask,       XK_e,	   quit,		   {0} },
        { ALT|ShiftMask,       	  XK_r,    quit,           {1} }, 


    /* Change the volume */
    { 0,                       XF86XK_AudioLowerVolume, spawn,  SHCMD("pactl set-sink-volume 0 -5%; pkill -RTMIN+10 dwmblocks")},
	{ 0,                       XF86XK_AudioMute,        spawn,  SHCMD("pactl set-sink-mute 0 toggle; pkill -RTMIN+10 dwmblocks")},
	{ 0,                       XF86XK_AudioRaiseVolume, spawn,  SHCMD("pactl set-sink-volume 0 +5%; pkill -RTMIN+10 dwmblocks")},

    /* Change brightness */
    { 0, XF86XK_MonBrightnessUp,	spawn,		SHCMD("xbacklight -inc 15") },
	{ 0, XF86XK_MonBrightnessDown,	spawn,		SHCMD("xbacklight -dec 15") },
};

/* Button definitions */
/* click can be ClkTagBar, ClkLtSymbol, ClkStatusText, ClkWinTitle, ClkClientWin, or ClkRootWin */
static Button buttons[] = {
	/* click           event mask   button          function        argument */
	{ ClkLtSymbol,     0,           Button1,        setlayout,      {0} },
	{ ClkLtSymbol,     0,           Button3,        setlayout,      {.v = &layouts[2]} },
	{ ClkWinTitle,     0,           Button2,        zoom,           {0} },
	{ ClkStatusText,   0,           Button2,        spawn,          {.v = termcmd } },
	{ ClkClientWin,    MODKEY,      Button1,        movemouse,      {0} },
	{ ClkClientWin,    MODKEY,      Button2,        togglefloating, {0} },
	{ ClkClientWin,    MODKEY,      Button3,        resizemouse,    {0} },
	{ ClkTagBar,       0,           Button1,        view,           {0} },
	{ ClkTagBar,       0,           Button3,        toggleview,     {0} },
	{ ClkTagBar,       MODKEY,      Button1,        tag,            {0} },
	{ ClkTagBar,       MODKEY,      Button3,        toggletag,      {0} },
};
