/************************************************************************************
 *  Name: dwg_constants.h
 *  Project: libOpenCAD OpenSource CAD formats support library
 *  Author: Alexandr Borzykh, mush3d at gmail.com
 *  Language: C++
 ************************************************************************************
 *  The MIT License (MIT)
 *
 *  Copyright (c) 2016 Alexandr Borzykh
 *
 *  Permission is hereby granted, free of charge, to any person obtaining a copy
 *  of this software and associated documentation files (the "Software"), to deal
 *  in the Software without restriction, including without limitation the rights
 *  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 *  copies of the Software, and to permit persons to whom the Software is
 *  furnished to do so, subject to the following conditions:
 *
 *  The above copyright notice and this permission notice shall be included in all
 *  copies or substantial portions of the Software.
 *
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 *  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 *  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 *  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 *  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 *  SOFTWARE.
 ************************************************************************************/

#ifndef OC_CONSTANTS_H
#define OC_CONSTANTS_H

#include <map>
#include <vector>
#include <string>


/* DWG OBJECTS CONSTANTS */

#define DWG_OBJECT_UNUSED               0x0
#define DWG_OBJECT_TEXT                 0x1
#define DWG_OBJECT_ATTRIB               0x2
#define DWG_OBJECT_ATTDEF               0x3
#define DWG_OBJECT_BLOCK                0x4
#define DWG_OBJECT_ENDBLK               0x5
#define DWG_OBJECT_SEQEND               0x6
#define DWG_OBJECT_INSERT               0x7
#define DWG_OBJECT_MINSERT1             0x8
#define DWG_OBJECT_MINSERT2             0x9
#define DWG_OBJECT_VERTEX2D             0x0A
#define DWG_OBJECT_VERTEX3D             0x0B
#define DWG_OBJECT_VERTEX_MESH          0x0C
#define DWG_OBJECT_VERTEX_PFACE         0x0D
#define DWG_OBJECT_VERTEX_PFACE_FACE    0x0E
#define DWG_OBJECT_POLYLINE2D           0x0F
#define DWG_OBJECT_POLYLINE3D           0x10
#define DWG_OBJECT_ARC                  0x11
#define DWG_OBJECT_CIRCLE               0x12
#define DWG_OBJECT_LINE                 0x13
#define DWG_OBJECT_DIMENSION_ORDINATE   0x14
#define DWG_OBJECT_DIMENSION_LINEAR     0x15
#define DWG_OBJECT_DIMENSION_ALIGNED    0x16
#define DWG_OBJECT_DIMENSION_ANG_3PT    0x17
#define DWG_OBJECT_DIMENSION_ANG_2LN    0x18
#define DWG_OBJECT_DIMENSION_RADIUS     0x19
#define DWG_OBJECT_DIMENSION_DIAMETER   0x1A
#define DWG_OBJECT_POINT                0x1B
#define DWG_OBJECT_3DFACE               0x1C
#define DWG_OBJECT_POLYLINE_PFACE       0x1D
#define DWG_OBJECT_POLYLINE_MESH        0x1E
#define DWG_OBJECT_SOLID                0x1F
#define DWG_OBJECT_TRACE                0x20
#define DWG_OBJECT_SHAPE                0x21
#define DWG_OBJECT_VIEWPORT             0x22
#define DWG_OBJECT_ELLIPSE              0x23
#define DWG_OBJECT_SPLINE               0x24
#define DWG_OBJECT_REGION               0x25
#define DWG_OBJECT_3DSOLID              0x26
#define DWG_OBJECT_BODY                 0x27
#define DWG_OBJECT_RAY                  0x28
#define DWG_OBJECT_XLINE                0x29
#define DWG_OBJECT_DICTIONARY           0x2A
#define DWG_OBJECT_OLEFRAME             0x2B
#define DWG_OBJECT_MTEXT                0x2C
#define DWG_OBJECT_LEADER               0x2D
#define DWG_OBJECT_TOLERANCE            0x2E
#define DWG_OBJECT_MLINE                0x2F
#define DWG_OBJECT_BLOCK_CONTROL_OBJ    0x30
#define DWG_OBJECT_BLOCK_HEADER         0x31
#define DWG_OBJECT_LAYER_CONTROL_OBJ    0x32
#define DWG_OBJECT_LAYER                0x33
#define DWG_OBJECT_STYLE_CONTROL_OBJ    0x34
#define DWG_OBJECT_STYLE1               0x35
#define DWG_OBJECT_STYLE2               0x36
#define DWG_OBJECT_STYLE3               0x37
#define DWG_OBJECT_LTYPE_CONTROL_OBJ    0x38
#define DWG_OBJECT_LTYPE1               0x39
#define DWG_OBJECT_LTYPE2               0x3A
#define DWG_OBJECT_LTYPE3               0x3B
#define DWG_OBJECT_VIEW_CONTROL_OBJ     0x3C
#define DWG_OBJECT_VIEW                 0x3D
#define DWG_OBJECT_UCS_CONTROL_OBJ      0x3E
#define DWG_OBJECT_UCS                  0x3F
#define DWG_OBJECT_VPORT_CONTROL_OBJ    0x40
#define DWG_OBJECT_VPORT                0x41
#define DWG_OBJECT_APPID_CONTROL_OBJ    0x42
#define DWG_OBJECT_APPID                0x43
#define DWG_OBJECT_DIMSTYLE_CONTROL_OBJ 0x44
#define DWG_OBJECT_DIMSTYLE             0x45
#define DWG_OBJECT_VP_ENT_HDR_CTRL_OBJ  0x46
#define DWG_OBJECT_VP_ENT_HDR           0x47
#define DWG_OBJECT_GROUP                0x48
#define DWG_OBJECT_MLINESTYLE           0x49
#define DWG_OBJECT_OLE2FRAME            0x4A
#define DWG_OBJECT_DUMMY                0x4B
#define DWG_OBJECT_LONG_TRANSACTION     0x4C
#define DWG_OBJECT_LWPOLYLINE           0x4D
#define DWG_OBJECT_HATCH                0x4E
#define DWG_OBJECT_XRECORD              0x4F
#define DWG_OBJECT_ACDBPLACEHOLDER      0x50
#define DWG_OBJECT_VBA_PROJECT          0x51
#define DWG_OBJECT_LAYOUT               0x52

const std::map < char, std::string > DWG_OBJECT_NAMES
{
       { DWG_OBJECT_UNUSED, "UNUSED" },
       { DWG_OBJECT_TEXT, "TEXT" },
       { DWG_OBJECT_ATTRIB, "ATTRIB"},
       { DWG_OBJECT_ATTDEF, "ATTDEF" },
       { DWG_OBJECT_BLOCK, "BLOCK" },
       { DWG_OBJECT_ENDBLK, "ENDBLK" },
       { DWG_OBJECT_SEQEND, "SEQEND" },
       { DWG_OBJECT_INSERT, "INSERT" },
       { DWG_OBJECT_MINSERT1, "MINSERT" },
       { DWG_OBJECT_MINSERT2, "MINSERT" },
       { DWG_OBJECT_VERTEX2D, "VERTEX 2D" },
       { DWG_OBJECT_VERTEX3D, "VERTEX 3D" },
       { DWG_OBJECT_VERTEX_MESH, "VERTEX MESH" },
       { DWG_OBJECT_VERTEX_PFACE, "VERTEX PFACE" },
       { DWG_OBJECT_VERTEX_PFACE_FACE, "VERTEX PFACE FACE" },
       { DWG_OBJECT_POLYLINE2D, "POLYLINE 2D" },
       { DWG_OBJECT_POLYLINE3D, "POLYLINE 3D" },
       { DWG_OBJECT_ARC, "ARC" },
       { DWG_OBJECT_CIRCLE, "CIRCLE" },
       { DWG_OBJECT_LINE, "LINE" },
       { DWG_OBJECT_DIMENSION_ORDINATE, "DIMENSION ORDINATE" },
       { DWG_OBJECT_DIMENSION_LINEAR, "DIMENSION LINEAR" },
       { DWG_OBJECT_DIMENSION_ALIGNED, "DIMENSION ALIGNED" },
       { DWG_OBJECT_DIMENSION_ANG_3PT, "DIMENSION ANG 3PT" },
       { DWG_OBJECT_DIMENSION_ANG_2LN, "DIMENSION AND 2LN" },
       { DWG_OBJECT_DIMENSION_RADIUS, "DIMENSION RADIUS" },
       { DWG_OBJECT_DIMENSION_DIAMETER, "DIMENSION DIAMETER" },
       { DWG_OBJECT_POINT, "POINT" },
       { DWG_OBJECT_3DFACE, "3DFACE" },
       { DWG_OBJECT_POLYLINE_PFACE, "POLYLINE PFACE" },
       { DWG_OBJECT_POLYLINE_MESH, "POLYLINE MESH" },
       { DWG_OBJECT_SOLID, "SOLID" },
       { DWG_OBJECT_TRACE, "TRACE" },
       { DWG_OBJECT_SHAPE, "SHAPE" },
       { DWG_OBJECT_VIEWPORT, "VIEWPORT" },
       { DWG_OBJECT_ELLIPSE, "ELLIPSE" },
       { DWG_OBJECT_SPLINE, "SPLINE" },
       { DWG_OBJECT_REGION, "REGION" },
       { DWG_OBJECT_3DSOLID, "3DSOLID" },
       { DWG_OBJECT_BODY, "BODY" },
       { DWG_OBJECT_RAY, "RAY" },
       { DWG_OBJECT_XLINE, "XLINE" },
       { DWG_OBJECT_DICTIONARY, "DICTIONARY" },
       { DWG_OBJECT_OLEFRAME, "OLEFRAME" },
       { DWG_OBJECT_MTEXT, "MTEXT" },
       { DWG_OBJECT_LEADER, "LEADER" },
       { DWG_OBJECT_TOLERANCE, "TOLERANCE" },
       { DWG_OBJECT_MLINE, "MLINE" },
       { DWG_OBJECT_BLOCK_CONTROL_OBJ, "BLOCK CONTROL OBJ" },
       { DWG_OBJECT_BLOCK_HEADER, "BLOCK HEADER" },
       { DWG_OBJECT_LAYER_CONTROL_OBJ, "LAYER CONTROL OBJ" },
       { DWG_OBJECT_LAYER, "LAYER" },
       { DWG_OBJECT_STYLE_CONTROL_OBJ, "STYLE CONTROL OBJ" },
       { DWG_OBJECT_STYLE1, "STYLE1" },
       { DWG_OBJECT_STYLE2, "STYLE2" },
       { DWG_OBJECT_STYLE3, "STYLE3" },
       { DWG_OBJECT_LTYPE_CONTROL_OBJ, "LTYPE CONTROL OBJ" },
       { DWG_OBJECT_LTYPE1, "LTYPE1" },
       { DWG_OBJECT_LTYPE2, "LTYPE2" },
       { DWG_OBJECT_LTYPE3, "LTYPE3" },
       { DWG_OBJECT_VIEW_CONTROL_OBJ, "VIEW CONTROL OBJ" },
       { DWG_OBJECT_VIEW, "VIEW" },
       { DWG_OBJECT_UCS_CONTROL_OBJ, "UCS CONTROL OBJ" },
       { DWG_OBJECT_UCS, "UCS" },
       { DWG_OBJECT_VPORT_CONTROL_OBJ, "VPORT CONTROL OBJ" },
       { DWG_OBJECT_VPORT, "VPORT" },
       { DWG_OBJECT_APPID_CONTROL_OBJ, "APPID CONTROL OBJ" },
       { DWG_OBJECT_APPID, "APPID" },
       { DWG_OBJECT_DIMSTYLE_CONTROL_OBJ, "DIMSTYLE CONTROL OBJ" },
       { DWG_OBJECT_DIMSTYLE, "DIMSTYLE" },
       { DWG_OBJECT_VP_ENT_HDR_CTRL_OBJ, "VP ENT HDR CTRL OBJ" },
       { DWG_OBJECT_VP_ENT_HDR, "VP ENT HDR" },
       { DWG_OBJECT_GROUP, "GROUP" },
       { DWG_OBJECT_MLINESTYLE, "MLINESTYLE" },
       { DWG_OBJECT_OLE2FRAME, "OLE2FRAME" },
       { DWG_OBJECT_DUMMY, "DUMMY" },
       { DWG_OBJECT_LONG_TRANSACTION, "LONG TRANSACTION" },
       { DWG_OBJECT_LWPOLYLINE, "LWPOLYLINE" },
       { DWG_OBJECT_HATCH, "HATCH" },
       { DWG_OBJECT_XRECORD, "XRECORD" },
       { DWG_OBJECT_ACDBPLACEHOLDER, "ACDBPLACEHOLDER" },
       { DWG_OBJECT_VBA_PROJECT, "VBA PROJECT" },
       { DWG_OBJECT_LAYOUT, "LAYOUT" }
};

// TODO: for now, library assumes all codes which are not in DWG_ENTITIES_CODE as non-entities.
const std::vector < int > DWG_ENTITIES_CODES
{
        DWG_OBJECT_TEXT, DWG_OBJECT_ATTRIB, DWG_OBJECT_ATTDEF,
        DWG_OBJECT_BLOCK, DWG_OBJECT_ENDBLK, DWG_OBJECT_SEQEND,
        DWG_OBJECT_INSERT, DWG_OBJECT_MINSERT1, DWG_OBJECT_MINSERT2,
        DWG_OBJECT_VERTEX2D, DWG_OBJECT_VERTEX3D, DWG_OBJECT_VERTEX_MESH,
        DWG_OBJECT_VERTEX_PFACE, DWG_OBJECT_VERTEX_PFACE_FACE,
        DWG_OBJECT_POLYLINE2D, DWG_OBJECT_POLYLINE3D, DWG_OBJECT_ARC,
        DWG_OBJECT_CIRCLE, DWG_OBJECT_LINE, DWG_OBJECT_DIMENSION_ORDINATE,
        DWG_OBJECT_DIMENSION_LINEAR, DWG_OBJECT_DIMENSION_ALIGNED, DWG_OBJECT_DIMENSION_ANG_3PT,
        DWG_OBJECT_DIMENSION_ANG_2LN, DWG_OBJECT_DIMENSION_RADIUS, DWG_OBJECT_DIMENSION_DIAMETER,
        DWG_OBJECT_POINT, DWG_OBJECT_3DFACE, DWG_OBJECT_POLYLINE_PFACE, DWG_OBJECT_POLYLINE_MESH,
        DWG_OBJECT_SOLID, DWG_OBJECT_TRACE, DWG_OBJECT_SHAPE, DWG_OBJECT_VIEWPORT, DWG_OBJECT_ELLIPSE,
        DWG_OBJECT_SPLINE, DWG_OBJECT_REGION, DWG_OBJECT_3DSOLID, DWG_OBJECT_BODY, DWG_OBJECT_RAY,
        DWG_OBJECT_LEADER, DWG_OBJECT_TOLERANCE, DWG_OBJECT_MLINE,
        DWG_OBJECT_HATCH, DWG_OBJECT_LWPOLYLINE, DWG_OBJECT_OLE2FRAME
};

const std::vector < char > DWG_GEOMETRIC_OBJECT_TYPES
{
      DWG_OBJECT_POINT, DWG_OBJECT_ARC, DWG_OBJECT_TEXT,
      DWG_OBJECT_ELLIPSE, DWG_OBJECT_CIRCLE, DWG_OBJECT_LINE,
      DWG_OBJECT_LWPOLYLINE, DWG_OBJECT_POLYLINE3D, DWG_OBJECT_MLINE,
      DWG_OBJECT_SPLINE, DWG_OBJECT_SOLID
};


#endif // OC_CONSTANTS_H
