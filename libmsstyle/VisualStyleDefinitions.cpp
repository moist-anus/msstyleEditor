#pragma once

#include "VisualStyleDefinitions.h"
#include <stdint.h>
#include <unordered_map>

namespace libmsstyle
{
	const std::unordered_map<int, const char*> PROPERTY_MAP =
	{
		{ 401, "COLORSCHEMES" }, // begin propery names
		{ 402, "SIZES" },
		{ 403, "CHARSET" },
		{ 600, "NAME" },
		{ 601, "DISPLAYNAME" },
		{ 602, "TOOLTIP" },
		{ 603, "COMPANY" },
		{ 604, "AUTHOR" },
		{ 605, "COPYRIGHT" },
		{ 606, "URL" },
		{ 607, "VERSION" },
		{ 608, "DESCRIPTION" },
		{ 601, "FIRST_RCSTRING_NAME" },
		{ 608, "LAST_RCSTRING_NAME" },
		{ 801, "CAPTIONFONT" },
		{ 802, "SMALLCAPTIONFONT" },
		{ 803, "MENUFONT" },
		{ 804, "STATUSFONT" },
		{ 805, "MSGBOXFONT" },
		{ 806, "ICONTITLEFONT" },
		{ 807, "HEADING1FONT" },
		{ 808, "HEADING2FONT" },
		{ 809, "BODYFONT" },
		{ 801, "FIRSTFONT" },
		{ 809, "LASTFONT" },
		{ 1001, "FLATMENUS" },
		{ 1001, "FIRSTBOOL" },
		{ 1001, "LASTBOOL" },
		{ 1201, "SIZINGBORDERWIDTH" },
		{ 1202, "SCROLLBARWIDTH" },
		{ 1203, "SCROLLBARHEIGHT" },
		{ 1204, "CAPTIONBARWIDTH" },
		{ 1205, "CAPTIONBARHEIGHT" },
		{ 1206, "SMCAPTIONBARWIDTH" },
		{ 1207, "SMCAPTIONBARHEIGHT" },
		{ 1208, "MENUBARWIDTH" },
		{ 1209, "MENUBARHEIGHT" },
		{ 1210, "PADDEDBORDERWIDTH" },
		{ 1201, "FIRSTSIZE" },
		{ 1210, "LASTSIZE" },
		{ 1301, "MINCOLORDEPTH" },
		{ 1301, "FIRSTINT" },
		{ 1301, "LASTINT" },
		{ 1401, "CSSNAME" },
		{ 1402, "XMLNAME" },
		{ 1403, "LASTUPDATED" },
		{ 1404, "ALIAS" },
		{ 1401, "FIRSTSTRING" },
		{ 1404, "LASTSTRING" },
		{ 1601, "SCROLLBAR" },
		{ 1602, "BACKGROUND" },
		{ 1603, "ACTIVECAPTION" },
		{ 1604, "INACTIVECAPTION" },
		{ 1605, "MENU" },
		{ 1606, "WINDOW" },
		{ 1607, "WINDOWFRAME" },
		{ 1608, "MENUTEXT" },
		{ 1609, "WINDOWTEXT" },
		{ 1610, "CAPTIONTEXT" },
		{ 1611, "ACTIVEBORDER" },
		{ 1612, "INACTIVEBORDER" },
		{ 1613, "APPWORKSPACE" },
		{ 1614, "HIGHLIGHT" },
		{ 1615, "HIGHLIGHTTEXT" },
		{ 1616, "BTNFACE" },
		{ 1617, "BTNSHADOW" },
		{ 1618, "GRAYTEXT" },
		{ 1619, "BTNTEXT" },
		{ 1620, "INACTIVECAPTIONTEXT" },
		{ 1621, "BTNHIGHLIGHT" },
		{ 1622, "DKSHADOW3D" },
		{ 1623, "LIGHT3D" },
		{ 1624, "INFOTEXT" },
		{ 1625, "INFOBK" },
		{ 1626, "BUTTONALTERNATEFACE" },
		{ 1627, "HOTTRACKING" },
		{ 1628, "GRADIENTACTIVECAPTION" },
		{ 1629, "GRADIENTINACTIVECAPTION" },
		{ 1630, "MENUHILIGHT" },
		{ 1631, "MENUBAR" },
		{ 1601, "FIRSTCOLOR" },
		{ 1631, "LASTCOLOR" },
		{ 1801, "FROMHUE1" },
		{ 1802, "FROMHUE2" },
		{ 1803, "FROMHUE3" },
		{ 1804, "FROMHUE4" },
		{ 1805, "FROMHUE5" },
		{ 1806, "TOHUE1" },
		{ 1807, "TOHUE2" },
		{ 1808, "TOHUE3" },
		{ 1809, "TOHUE4" },
		{ 1810, "TOHUE5" },
		{ 2001, "FROMCOLOR1" },
		{ 2002, "FROMCOLOR2" },
		{ 2003, "FROMCOLOR3" },
		{ 2004, "FROMCOLOR4" },
		{ 2005, "FROMCOLOR5" },
		{ 2006, "TOCOLOR1" },
		{ 2007, "TOCOLOR2" },
		{ 2008, "TOCOLOR3" },
		{ 2009, "TOCOLOR4" },
		{ 2010, "TOCOLOR5" },
		{ 2201, "TRANSPARENT" },
		{ 2202, "AUTOSIZE" },
		{ 2203, "BORDERONLY" },
		{ 2204, "COMPOSITED" },
		{ 2205, "BGFILL" },
		{ 2206, "GLYPHTRANSPARENT" },
		{ 2207, "GLYPHONLY" },
		{ 2208, "ALWAYSSHOWSIZINGBAR" },
		{ 2209, "MIRRORIMAGE" },
		{ 2210, "UNIFORMSIZING" },
		{ 2211, "INTEGRALSIZING" },
		{ 2212, "SOURCEGROW" },
		{ 2213, "SOURCESHRINK" },
		{ 2214, "DRAWBORDERS" },
		{ 2215, "NOETCHEDEFFECT" },
		{ 2216, "TEXTAPPLYOVERLAY" },
		{ 2217, "TEXTGLOW" },
		{ 2218, "TEXTITALIC" },
		{ 2219, "COMPOSITEDOPAQUE" },
		{ 2220, "LOCALIZEDMIRRORIMAGE" },
		{ 2401, "IMAGECOUNT" },
		{ 2402, "ALPHALEVEL" },
		{ 2403, "BORDERSIZE" },
		{ 2404, "ROUNDCORNERWIDTH" },
		{ 2405, "ROUNDCORNERHEIGHT" },
		{ 2406, "GRADIENTRATIO1" },
		{ 2407, "GRADIENTRATIO2" },
		{ 2408, "GRADIENTRATIO3" },
		{ 2409, "GRADIENTRATIO4" },
		{ 2410, "GRADIENTRATIO5" },
		{ 2411, "PROGRESSCHUNKSIZE" },
		{ 2412, "PROGRESSSPACESIZE" },
		{ 2413, "SATURATION" },
		{ 2414, "TEXTBORDERSIZE" },
		{ 2415, "ALPHATHRESHOLD" },
		{ 2416, "WIDTH" },
		{ 2417, "HEIGHT" },
		{ 2418, "GLYPHINDEX" },
		{ 2419, "TRUESIZESTRETCHMARK" },
		{ 2420, "MINDPI1" },
		{ 2421, "MINDPI2" },
		{ 2422, "MINDPI3" },
		{ 2423, "MINDPI4" },
		{ 2424, "MINDPI5" },
		{ 2425, "TEXTGLOWSIZE" },
		{ 2426, "FRAMESPERSECOND" },
		{ 2427, "PIXELSPERFRAME" },
		{ 2428, "ANIMATIONDELAY" },
		{ 2429, "GLOWINTENSITY" },
		{ 2430, "OPACITY" },
		{ 2431, "COLORIZATIONCOLOR" },
		{ 2432, "COLORIZATIONOPACITY" },
		{ 2433, "MINDPI6" },	// since win 10
		{ 2434, "MINDPI7" },	// since win 10
		{ 2601, "GLYPHFONT" },
		{ 3001, "IMAGEFILE" },
		{ 3002, "IMAGEFILE1" },
		{ 3003, "IMAGEFILE2" },
		{ 3004, "IMAGEFILE3" },
		{ 3005, "IMAGEFILE4" },
		{ 3006, "IMAGEFILE5" },
		{ 3008, "GLYPHIMAGEFILE" },
		{ 3009, "IMAGEFILE6" },	// since win 10
		{ 3010, "IMAGEFILE7" },	// since win 10
		{ 3201, "TEXT" },
		{ 3202, "CLASSICVALUE" },
		{ 3401, "OFFSET" },
		{ 3402, "TEXTSHADOWOFFSET" },
		{ 3403, "MINSIZE" },
		{ 3404, "MINSIZE1" },
		{ 3405, "MINSIZE2" },
		{ 3406, "MINSIZE3" },
		{ 3407, "MINSIZE4" },
		{ 3408, "MINSIZE5" },
		{ 3409, "NORMALSIZE" },
		{ 3601, "SIZINGMARGINS" },
		{ 3602, "CONTENTMARGINS" },
		{ 3603, "CAPTIONMARGINS" },
		{ 3801, "BORDERCOLOR" },
		{ 3802, "FILLCOLOR" },
		{ 3803, "TEXTCOLOR" },
		{ 3804, "EDGELIGHTCOLOR" },
		{ 3805, "EDGEHIGHLIGHTCOLOR" },
		{ 3806, "EDGESHADOWCOLOR" },
		{ 3807, "EDGEDKSHADOWCOLOR" },
		{ 3808, "EDGEFILLCOLOR" },
		{ 3809, "TRANSPARENTCOLOR" },
		{ 3810, "GRADIENTCOLOR1" },
		{ 3811, "GRADIENTCOLOR2" },
		{ 3812, "GRADIENTCOLOR3" },
		{ 3813, "GRADIENTCOLOR4" },
		{ 3814, "GRADIENTCOLOR5" },
		{ 3815, "SHADOWCOLOR" },
		{ 3816, "GLOWCOLOR" },
		{ 3817, "TEXTBORDERCOLOR" },
		{ 3818, "TEXTSHADOWCOLOR" },
		{ 3819, "GLYPHTEXTCOLOR" },
		{ 3820, "GLYPHTRANSPARENTCOLOR" },
		{ 3821, "FILLCOLORHINT" },
		{ 3822, "BORDERCOLORHINT" },
		{ 3823, "ACCENTCOLORHINT" },
		{ 3824, "TEXTCOLORHINT" },
		{ 3825, "HEADING1TEXTCOLOR" },
		{ 3826, "HEADING2TEXTCOLOR" },
		{ 3827, "BODYTEXTCOLOR" },
		{ 4001, "BGTYPE" },
		{ 4002, "BORDERTYPE" },
		{ 4003, "FILLTYPE" },
		{ 4004, "SIZINGTYPE" },
		{ 4005, "HALIGN" },
		{ 4006, "CONTENTALIGNMENT" },
		{ 4007, "VALIGN" },
		{ 4008, "OFFSETTYPE" },
		{ 4009, "ICONEFFECT" },
		{ 4010, "TEXTSHADOWTYPE" },
		{ 4011, "IMAGELAYOUT" },
		{ 4012, "GLYPHTYPE" },
		{ 4013, "IMAGESELECTTYPE" },
		{ 4014, "GLYPHFONTSIZINGTYPE" },
		{ 4015, "TRUESIZESCALINGTYPE" },
		{ 5001, "USERPICTURE" },
		{ 5002, "DEFAULTPANESIZE" },
		{ 5003, "BLENDCOLOR" },
		{ 5004, "CUSTOMSPLITRECT" },
		{ 5005, "ANIMATIONBUTTONRECT" },
		{ 5006, "ANIMATIONDURATION" },
		/* Unknown props found in Win10 styles */
		{ 5111, "UNKNOWN_5111" },
		{ 5112, "UNKNOWN_5112" },
		{ 5128, "UNKNOWN_5128" },
		{ 5129, "UNKNOWN_5129" },
		{ 5130, "UNKNOWN_5130" },
		{ 6000, "TRANSITIONDURATIONS" },
		{ 7001, "SCALEDBACKGROUND" },
		{ 8000, "ATLASIMAGE" },
		{ 8001, "ATLASINPUTIMAGE" },
		{ 8002, "ATLASRECT" }
	};

	const std::unordered_map<int, PropertyInfo> PROPERTY_INFO_MAP
	{
		// STRING
		{ 401, { "COLORSCHEMES", 201, "" } }, // begin propery names
		{ 402, { "SIZES", 201, "" } },
		// INT
		{ 403, { "CHARSET", 202, "" } },
		// STRING
		{ 600, { "NAME", 201, "" } },
		{ 601, { "DISPLAYNAME", 201, "" } },
		{ 602, { "TOOLTIP", 201, "" } },
		{ 603, { "COMPANY", 201, "" } },
		{ 604, { "AUTHOR", 201, "" } },
		{ 605, { "COPYRIGHT", 201, "" } },
		{ 606, { "URL", 201, "" } },
		{ 607, { "VERSION", 201, "" } },
		{ 608, { "DESCRIPTION", 201, "" } },
		{ 601, { "FIRST_RCSTRING_NAME", 201, "" } },
		{ 608, { "LAST_RCSTRING_NAME", 201, "" } },
		// FONT
		{ 801, { "CAPTIONFONT", 210, "" } },
		{ 802, { "SMALLCAPTIONFONT", 210, "" } },
		{ 803, { "MENUFONT", 210, "" } },
		{ 804, { "STATUSFONT", 210, "" } },
		{ 805, { "MSGBOXFONT", 210, "" } },
		{ 806, { "ICONTITLEFONT", 210, "" } },
		{ 807, { "HEADING1FONT", 210, "" } },
		{ 808, { "HEADING2FONT", 210, "" } },
		{ 809, { "BODYFONT", 210, "" } },
		{ 801, { "FIRSTFONT", 210, "" } },
		{ 809, { "LASTFONT", 210, "" } },
		// BOOL
		{ 1001, { "FLATMENUS", 203, "" } },
		{ 1001, { "FIRSTBOOL", 203, "" } },
		{ 1001, { "LASTBOOL", 203, "" } },
		// INT / SIZE
		{ 1201, { "SIZINGBORDERWIDTH", 202, "" } },
		{ 1202, { "SCROLLBARWIDTH", 202, "" } },
		{ 1203, { "SCROLLBARHEIGHT", 202, "" } },
		{ 1204, { "CAPTIONBARWIDTH", 202, "" } },
		{ 1205, { "CAPTIONBARHEIGHT", 202, "" } },
		{ 1206, { "SMCAPTIONBARWIDTH", 202, "" } },
		{ 1207, { "SMCAPTIONBARHEIGHT", 202, "" } },
		{ 1208, { "MENUBARWIDTH", 202, "" } },
		{ 1209, { "MENUBARHEIGHT", 202, "" } },
		{ 1210, { "PADDEDBORDERWIDTH", 202, "" } },
		{ 1201, { "FIRSTSIZE", 202, "" } },
		{ 1210, { "LASTSIZE", 202, "" } },
		// INT
		{ 1301, { "MINCOLORDEPTH", 202, "" } },
		{ 1301, { "FIRSTINT", 202, "" } },
		{ 1301, { "LASTINT", 202, "" } },
		// STRING
		{ 1401, { "CSSNAME", 201, "" } },
		{ 1402, { "XMLNAME", 201, "" } },
		{ 1403, { "LASTUPDATED", 201, "" } },
		{ 1404, { "ALIAS", 201, "" } },
		{ 1401, { "FIRSTSTRING", 201, "" } },
		{ 1404, { "LASTSTRING", 201, "" } },
		// COLOR
		{ 1601, { "SCROLLBAR", 204, "" } },
		{ 1602, { "BACKGROUND", 204, "" } },
		{ 1603, { "ACTIVECAPTION", 204, "" } },
		{ 1604, { "INACTIVECAPTION", 204, "" } },
		{ 1605, { "MENU", 204, "" } },
		{ 1606, { "WINDOW", 204, "" } },
		{ 1607, { "WINDOWFRAME", 204, "" } },
		{ 1608, { "MENUTEXT", 204, "" } },
		{ 1609, { "WINDOWTEXT", 204, "" } },
		{ 1610, { "CAPTIONTEXT", 204, "" } },
		{ 1611, { "ACTIVEBORDER", 204, "" } },
		{ 1612, { "INACTIVEBORDER", 204, "" } },
		{ 1613, { "APPWORKSPACE", 204, "" } },
		{ 1614, { "HIGHLIGHT", 204, "" } },
		{ 1615, { "HIGHLIGHTTEXT", 204, "" } },
		{ 1616, { "BTNFACE", 204, "" } },
		{ 1617, { "BTNSHADOW", 204, "" } },
		{ 1618, { "GRAYTEXT", 204, "" } },
		{ 1619, { "BTNTEXT", 204, "" } },
		{ 1620, { "INACTIVECAPTIONTEXT", 204, "" } },
		{ 1621, { "BTNHIGHLIGHT", 204, "" } },
		{ 1622, { "DKSHADOW3D", 204, "" } },
		{ 1623, { "LIGHT3D", 204, "" } },
		{ 1624, { "INFOTEXT", 204, "" } },
		{ 1625, { "INFOBK", 204, "" } },
		{ 1626, { "BUTTONALTERNATEFACE", 204, "" } },
		{ 1627, { "HOTTRACKING", 204, "" } },
		{ 1628, { "GRADIENTACTIVECAPTION", 204, "" } },
		{ 1629, { "GRADIENTINACTIVECAPTION", 204, "" } },
		{ 1630, { "MENUHILIGHT", 204, "" } },
		{ 1631, { "MENUBAR", 204, "" } },
		{ 1601, { "FIRSTCOLOR", 204, "" } },
		{ 1631, { "LASTCOLOR", 204, "" } },
		// INT
		{ 1801, { "FROMHUE1", 202, "" } },
		{ 1802, { "FROMHUE2", 202, "" } },
		{ 1803, { "FROMHUE3", 202, "" } },
		{ 1804, { "FROMHUE4", 202, "" } },
		{ 1805, { "FROMHUE5", 202, "" } },
		{ 1806, { "TOHUE1", 202, "" } },
		{ 1807, { "TOHUE2", 202, "" } },
		{ 1808, { "TOHUE3", 202, "" } },
		{ 1809, { "TOHUE4", 202, "" } },
		{ 1810, { "TOHUE5", 202, "" } },
		// COLOR - Weird
		{ 2001, { "FROMCOLOR1", 204, "" } },
		{ 2002, { "FROMCOLOR2", 204, "" } },
		{ 2003, { "FROMCOLOR3", 204, "" } },
		{ 2004, { "FROMCOLOR4", 204, "" } },
		{ 2005, { "FROMCOLOR5", 204, "" } },
		// INT - Weird
		{ 2006, { "TOCOLOR1", 202, "" } },
		{ 2007, { "TOCOLOR2", 202, "" } },
		{ 2008, { "TOCOLOR3", 202, "" } },
		{ 2009, { "TOCOLOR4", 202, "" } },
		{ 2010, { "TOCOLOR5", 202, "" } },
		// BOOL
		{ 2201, { "TRANSPARENT", 203, "" } },
		{ 2202, { "AUTOSIZE", 203, "" } },
		{ 2203, { "BORDERONLY", 203, "" } },
		{ 2204, { "COMPOSITED", 203, "" } },
		{ 2205, { "BGFILL", 203, "" } },
		{ 2206, { "GLYPHTRANSPARENT", 203, "" } },
		{ 2207, { "GLYPHONLY", 203, "" } },
		{ 2208, { "ALWAYSSHOWSIZINGBAR", 203, "" } },
		{ 2209, { "MIRRORIMAGE", 203, "" } },
		{ 2210, { "UNIFORMSIZING", 203, "" } },
		{ 2211, { "INTEGRALSIZING", 203, "" } },
		{ 2212, { "SOURCEGROW", 203, "" } },
		{ 2213, { "SOURCESHRINK", 203, "" } },
		{ 2214, { "DRAWBORDERS", 203, "" } },
		{ 2215, { "NOETCHEDEFFECT", 203, "" } },
		{ 2216, { "TEXTAPPLYOVERLAY", 203, "" } },
		{ 2217, { "TEXTGLOW", 203, "" } },
		{ 2218, { "TEXTITALIC", 203, "" } },
		{ 2219, { "COMPOSITEDOPAQUE", 203, "" } },
		{ 2220, { "LOCALIZEDMIRRORIMAGE", 203, "" } },
		// INT
		{ 2401, { "IMAGECOUNT", 202, "" } },
		{ 2402, { "ALPHALEVEL", 202, "" } },
		{ 2403, { "BORDERSIZE", 202, "" } },
		{ 2404, { "ROUNDCORNERWIDTH", 202, "" } },
		{ 2405, { "ROUNDCORNERHEIGHT", 202, "" } },
		{ 2406, { "GRADIENTRATIO1", 202, "" } },
		{ 2407, { "GRADIENTRATIO2", 202, "" } },
		{ 2408, { "GRADIENTRATIO3", 202, "" } },
		{ 2409, { "GRADIENTRATIO4", 202, "" } },
		{ 2410, { "GRADIENTRATIO5", 202, "" } },
		{ 2411, { "PROGRESSCHUNKSIZE", 202, "" } },
		{ 2412, { "PROGRESSSPACESIZE", 202, "" } },
		{ 2413, { "SATURATION", 202, "" } },
		{ 2414, { "TEXTBORDERSIZE", 202, "" } },
		{ 2415, { "ALPHATHRESHOLD", 202, "" } },
		{ 2416, { "WIDTH", 202, "" } },
		{ 2417, { "HEIGHT", 202, "" } },
		{ 2418, { "GLYPHINDEX", 202, "" } },
		{ 2419, { "TRUESIZESTRETCHMARK", 202, "" } },
		{ 2420, { "MINDPI1", 202, "" } },
		{ 2421, { "MINDPI2", 202, "" } },
		{ 2422, { "MINDPI3", 202, "" } },
		{ 2423, { "MINDPI4", 202, "" } },
		{ 2424, { "MINDPI5", 202, "" } },
		{ 2425, { "TEXTGLOWSIZE", 202, "" } },
		{ 2426, { "FRAMESPERSECOND", 202, "" } },
		{ 2427, { "PIXELSPERFRAME", 202, "" } },
		{ 2428, { "ANIMATIONDELAY", 202, "" } },
		{ 2429, { "GLOWINTENSITY", 202, "" } },
		{ 2430, { "OPACITY", 202, "" } },
		{ 2431, { "COLORIZATIONCOLOR", 202, "" } },
		{ 2432, { "COLORIZATIONOPACITY", 202, "" } },
		{ 2433, { "MINDPI6", 202, "" } },	// since win 10
		{ 2434, { "MINDPI7", 202, "" } },	// since win 10
		// FONT
		{ 2601, { "GLYPHFONT", 210, "" } },
		// FILENAME (ID)
		{ 3001, { "IMAGEFILE", 206, "" } },
		{ 3002, { "IMAGEFILE1", 206, "" } },
		{ 3003, { "IMAGEFILE2", 206, "" } },
		{ 3004, { "IMAGEFILE3", 206, "" } },
		{ 3005, { "IMAGEFILE4", 206, "" } },
		{ 3006, { "IMAGEFILE5", 206, "" } },
		{ 3008, { "GLYPHIMAGEFILE", 206, "" } },
		{ 3009, { "IMAGEFILE6", 206, "" } },	// since win 10
		{ 3010, { "IMAGEFILE7", 206, "" } },	// since win 10
		// STRING
		{ 3201, { "TEXT", 201, "" } },
		{ 3202, { "CLASSICVALUE", 201, "" } },
		// POSITION
		{ 3401, { "OFFSET", 208, "" } },
		{ 3402, { "TEXTSHADOWOFFSET", 208, "" } },
		{ 3403, { "MINSIZE", 208, "" } },
		{ 3404, { "MINSIZE1", 208, "" } },
		{ 3405, { "MINSIZE2", 208, "" } },
		{ 3406, { "MINSIZE3", 208, "" } },
		{ 3407, { "MINSIZE4", 208, "" } },
		{ 3408, { "MINSIZE5", 208, "" } },
		{ 3409, { "NORMALSIZE", 208, "" } },
		// MARGINS
		{ 3601, { "SIZINGMARGINS", 205, "" } },
		{ 3602, { "CONTENTMARGINS", 205, "" } },
		{ 3603, { "CAPTIONMARGINS", 205, "" } },
		// COLOR
		{ 3801, { "BORDERCOLOR", 204, "" } },
		{ 3802, { "FILLCOLOR", 204, "" } },
		{ 3803, { "TEXTCOLOR", 204, "" } },
		{ 3804, { "EDGELIGHTCOLOR", 204, "" } },
		{ 3805, { "EDGEHIGHLIGHTCOLOR", 204, "" } },
		{ 3806, { "EDGESHADOWCOLOR", 204, "" } },
		{ 3807, { "EDGEDKSHADOWCOLOR", 204, "" } },
		{ 3808, { "EDGEFILLCOLOR", 204, "" } },
		{ 3809, { "TRANSPARENTCOLOR", 204, "" } },
		{ 3810, { "GRADIENTCOLOR1", 204, "" } },
		{ 3811, { "GRADIENTCOLOR2", 204, "" } },
		{ 3812, { "GRADIENTCOLOR3", 204, "" } },
		{ 3813, { "GRADIENTCOLOR4", 204, "" } },
		{ 3814, { "GRADIENTCOLOR5", 204, "" } },
		{ 3815, { "SHADOWCOLOR", 204, "" } },
		{ 3816, { "GLOWCOLOR", 204, "" } },
		{ 3817, { "TEXTBORDERCOLOR", 204, "" } },
		{ 3818, { "TEXTSHADOWCOLOR", 204, "" } },
		{ 3819, { "GLYPHTEXTCOLOR", 204, "" } },
		{ 3820, { "GLYPHTRANSPARENTCOLOR", 204, "" } },
		{ 3821, { "FILLCOLORHINT", 204, "" } },
		{ 3822, { "BORDERCOLORHINT", 204, "" } },
		{ 3823, { "ACCENTCOLORHINT", 204, "" } },
		{ 3824, { "TEXTCOLORHINT", 204, "" } },
		{ 3825, { "HEADING1TEXTCOLOR", 204, "" } },
		{ 3826, { "HEADING2TEXTCOLOR", 204, "" } },
		{ 3827, { "BODYTEXTCOLOR", 204, "" } },
		// ENUM
		{ 4001, { "BGTYPE", 200, "" } },
		{ 4002, { "BORDERTYPE", 200, "" } },
		{ 4003, { "FILLTYPE", 200, "" } },
		{ 4004, { "SIZINGTYPE", 200, "" } },
		{ 4005, { "HALIGN", 200, "" } },
		{ 4006, { "CONTENTALIGNMENT", 200, "" } },
		{ 4007, { "VALIGN", 200, "" } },
		{ 4008, { "OFFSETTYPE", 200, "" } },
		{ 4009, { "ICONEFFECT", 200, "" } },
		{ 4010, { "TEXTSHADOWTYPE", 200, "" } },
		{ 4011, { "IMAGELAYOUT", 200, "" } },
		{ 4012, { "GLYPHTYPE", 200, "" } },
		{ 4013, { "IMAGESELECTTYPE", 200, "" } },
		{ 4014, { "GLYPHFONTSIZINGTYPE", 200, "" } },
		{ 4015, { "TRUESIZESCALINGTYPE", 200, "" } },
		// BOOL
		{ 5001, { "USERPICTURE", 203, "" } },
		// RECT
		{ 5002, { "DEFAULTPANESIZE", 209, "" } },
		// COLOR
		{ 5003, { "BLENDCOLOR", 204, "" } },
		// RECT
		{ 5004, { "CUSTOMSPLITRECT", 209, "" } },
		{ 5005, { "ANIMATIONBUTTONRECT", 209, "" } },
		// INT
		{ 5006, { "ANIMATIONDURATION", 202, "" } },
		// Unknown props found in Win10 styles
		{ 5111, { "UNKNOWN_5111", 0, "" } },
		{ 5112, { "UNKNOWN_5112", 0, "" } },
		{ 5128, { "UNKNOWN_5128", 0, "" } },
		{ 5129, { "UNKNOWN_5129", 0, "" } },
		{ 5130, { "UNKNOWN_5130", 0, "" } },
		// INTLIST
		{ 6000, { "TRANSITIONDURATIONS", 211, "" } },
		// BOOL
		{ 7001, { "SCALEDBACKGROUND", 203, "" } },
		// DISKSTREAM
		{ 8000, { "ATLASIMAGE", 213, "" } },
		// STRING
		{ 8001, { "ATLASINPUTIMAGE", 201, "" } },
		// RECT
		{ 8002, { "ATLASRECT", 209, "" } }
	};

	const std::unordered_map<int, const char*> DATATYPE_MAP =
	{
		{ 2, "DIBDATA" },
		{ 8, "GLYPHDIBDATA" },
		{ 200, "ENUM" },
		{ 201, "STRING" },
		{ 202, "INT" },
		{ 203, "BOOL" },
		{ 204, "COLOR" },
		{ 205, "MARGINS" },
		{ 206, "FILENAME" },
		{ 207, "SIZE" },
		{ 208, "POSITION" },
		{ 209, "RECT" },
		{ 210, "FONT" },
		{ 211, "INTLIST" },
		{ 212, "HBITMAP" },
		{ 213, "DISKSTREAM" },
		{ 214, "STREAM" },
		{ 215, "BITMAPREF" },
		{ 216, "FLOAT" },
		{ 217, "FLOATLIST" },
		{ 241, "UNKNOWN_241" },
	};
}