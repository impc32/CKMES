﻿
// Generated by Volcano Development Platform - http://www.voldp.com

#include "stdafx.h"
#include "vol_user_app.h"

namespace rg_volcano_base
{

void rg_KuoZhanDuiXiangLei::GetDumpString (CVolString& rg_ZhanShiNeiRong21, INT rg_ZuiDaZhanShiShuJuCheCun21)
{
    BaseClass::GetDumpString (rg_ZhanShiNeiRong21, rg_ZuiDaZhanShiShuJuCheCun21);
}

void rg_KuoZhanDuiXiangLei::LoadFromStream (CVolBaseInputStream& rg_LiuDuiXiang42)
{
}

void rg_KuoZhanDuiXiangLei::SaveIntoStream (CVolBaseOutputStream& rg_LiuDuiXiang43)
{
}

CVolString rg_KeSheJiLei::VolGetDesignContent ()
{
    return (_T (""));
}

rg_ZiJieLei::rg_ZiJieLei ()
{
    _VolObjectInitMembers ();
}

void rg_ZiJieLei::_VolObjectInitMembers ()
{
    rg_value = 0;
}

BOOL rg_ZiJieLei::_IsSelfEqual (const rg_ZiJieLei& objCompare) const
{
    if (rg_value != objCompare.rg_value)  return FALSE;
    return TRUE;
}

void rg_ZiJieLei::_CopySelfFrom (const rg_ZiJieLei& objCopyFrom)
{
    rg_value = objCopyFrom.rg_value;
}

void rg_ZiJieLei::LoadFromStream (CVolBaseInputStream& stream)
{
    if (stream.IsFoundError ())  return;
    BaseClass::LoadFromStream (stream);
    stream.ReadExact (&rg_value, sizeof (S_BYTE));
}

void rg_ZiJieLei::SaveIntoStream (CVolBaseOutputStream& stream)
{
    if (stream.IsFoundError ())  return;
    BaseClass::SaveIntoStream (stream);
    stream.write (&rg_value, sizeof (S_BYTE));
}

rg_DuanZhengShuLei::rg_DuanZhengShuLei ()
{
    _VolObjectInitMembers ();
}

void rg_DuanZhengShuLei::_VolObjectInitMembers ()
{
    rg_value1 = 0;
}

BOOL rg_DuanZhengShuLei::_IsSelfEqual (const rg_DuanZhengShuLei& objCompare) const
{
    if (rg_value1 != objCompare.rg_value1)  return FALSE;
    return TRUE;
}

void rg_DuanZhengShuLei::_CopySelfFrom (const rg_DuanZhengShuLei& objCopyFrom)
{
    rg_value1 = objCopyFrom.rg_value1;
}

void rg_DuanZhengShuLei::LoadFromStream (CVolBaseInputStream& stream)
{
    if (stream.IsFoundError ())  return;
    BaseClass::LoadFromStream (stream);
    stream.ReadExact (&rg_value1, sizeof (SHORT));
}

void rg_DuanZhengShuLei::SaveIntoStream (CVolBaseOutputStream& stream)
{
    if (stream.IsFoundError ())  return;
    BaseClass::SaveIntoStream (stream);
    stream.write (&rg_value1, sizeof (SHORT));
}

rg_ZiFuLei::rg_ZiFuLei ()
{
    _VolObjectInitMembers ();
}

void rg_ZiFuLei::_VolObjectInitMembers ()
{
    rg_value2 = 0;
}

BOOL rg_ZiFuLei::_IsSelfEqual (const rg_ZiFuLei& objCompare) const
{
    if (rg_value2 != objCompare.rg_value2)  return FALSE;
    return TRUE;
}

void rg_ZiFuLei::_CopySelfFrom (const rg_ZiFuLei& objCopyFrom)
{
    rg_value2 = objCopyFrom.rg_value2;
}

void rg_ZiFuLei::LoadFromStream (CVolBaseInputStream& stream)
{
    if (stream.IsFoundError ())  return;
    BaseClass::LoadFromStream (stream);
    stream.ReadExact (&rg_value2, sizeof (TCHAR));
}

void rg_ZiFuLei::SaveIntoStream (CVolBaseOutputStream& stream)
{
    if (stream.IsFoundError ())  return;
    BaseClass::SaveIntoStream (stream);
    stream.write (&rg_value2, sizeof (TCHAR));
}

rg_ZhengShuLei::rg_ZhengShuLei ()
{
    _VolObjectInitMembers ();
}

void rg_ZhengShuLei::_VolObjectInitMembers ()
{
    rg_value3 = 0;
}

BOOL rg_ZhengShuLei::_IsSelfEqual (const rg_ZhengShuLei& objCompare) const
{
    if (rg_value3 != objCompare.rg_value3)  return FALSE;
    return TRUE;
}

void rg_ZhengShuLei::_CopySelfFrom (const rg_ZhengShuLei& objCopyFrom)
{
    rg_value3 = objCopyFrom.rg_value3;
}

void rg_ZhengShuLei::LoadFromStream (CVolBaseInputStream& stream)
{
    if (stream.IsFoundError ())  return;
    BaseClass::LoadFromStream (stream);
    stream.ReadExact (&rg_value3, sizeof (INT));
}

void rg_ZhengShuLei::SaveIntoStream (CVolBaseOutputStream& stream)
{
    if (stream.IsFoundError ())  return;
    BaseClass::SaveIntoStream (stream);
    stream.write (&rg_value3, sizeof (INT));
}

rg_BianZhengShuLei::rg_BianZhengShuLei ()
{
    _VolObjectInitMembers ();
}

void rg_BianZhengShuLei::_VolObjectInitMembers ()
{
    rg_value4 = 0;
}

BOOL rg_BianZhengShuLei::_IsSelfEqual (const rg_BianZhengShuLei& objCompare) const
{
    if (rg_value4 != objCompare.rg_value4)  return FALSE;
    return TRUE;
}

void rg_BianZhengShuLei::_CopySelfFrom (const rg_BianZhengShuLei& objCopyFrom)
{
    rg_value4 = objCopyFrom.rg_value4;
}

void rg_BianZhengShuLei::LoadFromStream (CVolBaseInputStream& stream)
{
    if (stream.IsFoundError ())  return;
    BaseClass::LoadFromStream (stream);
    stream.ReadExact (&rg_value4, sizeof (INT));
}

void rg_BianZhengShuLei::SaveIntoStream (CVolBaseOutputStream& stream)
{
    if (stream.IsFoundError ())  return;
    BaseClass::SaveIntoStream (stream);
    stream.write (&rg_value4, sizeof (INT));
}

rg_ChangZhengShuLei::rg_ChangZhengShuLei ()
{
    _VolObjectInitMembers ();
}

void rg_ChangZhengShuLei::_VolObjectInitMembers ()
{
    rg_value5 = 0;
}

BOOL rg_ChangZhengShuLei::_IsSelfEqual (const rg_ChangZhengShuLei& objCompare) const
{
    if (rg_value5 != objCompare.rg_value5)  return FALSE;
    return TRUE;
}

void rg_ChangZhengShuLei::_CopySelfFrom (const rg_ChangZhengShuLei& objCopyFrom)
{
    rg_value5 = objCopyFrom.rg_value5;
}

void rg_ChangZhengShuLei::LoadFromStream (CVolBaseInputStream& stream)
{
    if (stream.IsFoundError ())  return;
    BaseClass::LoadFromStream (stream);
    stream.ReadExact (&rg_value5, sizeof (INT64));
}

void rg_ChangZhengShuLei::SaveIntoStream (CVolBaseOutputStream& stream)
{
    if (stream.IsFoundError ())  return;
    BaseClass::SaveIntoStream (stream);
    stream.write (&rg_value5, sizeof (INT64));
}

rg_ChanJingDuXiaoShuLei::rg_ChanJingDuXiaoShuLei ()
{
    _VolObjectInitMembers ();
}

void rg_ChanJingDuXiaoShuLei::_VolObjectInitMembers ()
{
    rg_value6 = 0;
}

BOOL rg_ChanJingDuXiaoShuLei::_IsSelfEqual (const rg_ChanJingDuXiaoShuLei& objCompare) const
{
    if (IsFloatEqual (rg_value6, objCompare.rg_value6) == FALSE)  return FALSE;
    return TRUE;
}

void rg_ChanJingDuXiaoShuLei::_CopySelfFrom (const rg_ChanJingDuXiaoShuLei& objCopyFrom)
{
    rg_value6 = objCopyFrom.rg_value6;
}

void rg_ChanJingDuXiaoShuLei::LoadFromStream (CVolBaseInputStream& stream)
{
    if (stream.IsFoundError ())  return;
    BaseClass::LoadFromStream (stream);
    stream.ReadExact (&rg_value6, sizeof (FLOAT));
}

void rg_ChanJingDuXiaoShuLei::SaveIntoStream (CVolBaseOutputStream& stream)
{
    if (stream.IsFoundError ())  return;
    BaseClass::SaveIntoStream (stream);
    stream.write (&rg_value6, sizeof (FLOAT));
}

rg_XiaoShuLei::rg_XiaoShuLei ()
{
    _VolObjectInitMembers ();
}

void rg_XiaoShuLei::_VolObjectInitMembers ()
{
    rg_value7 = 0;
}

BOOL rg_XiaoShuLei::_IsSelfEqual (const rg_XiaoShuLei& objCompare) const
{
    if (IsDoubleEqual (rg_value7, objCompare.rg_value7) == FALSE)  return FALSE;
    return TRUE;
}

void rg_XiaoShuLei::_CopySelfFrom (const rg_XiaoShuLei& objCopyFrom)
{
    rg_value7 = objCopyFrom.rg_value7;
}

void rg_XiaoShuLei::LoadFromStream (CVolBaseInputStream& stream)
{
    if (stream.IsFoundError ())  return;
    BaseClass::LoadFromStream (stream);
    stream.ReadExact (&rg_value7, sizeof (DOUBLE));
}

void rg_XiaoShuLei::SaveIntoStream (CVolBaseOutputStream& stream)
{
    if (stream.IsFoundError ())  return;
    BaseClass::SaveIntoStream (stream);
    stream.write (&rg_value7, sizeof (DOUBLE));
}

rg_LuoJiXingLei::rg_LuoJiXingLei ()
{
    _VolObjectInitMembers ();
}

void rg_LuoJiXingLei::_VolObjectInitMembers ()
{
    rg_value8 = FALSE;
}

BOOL rg_LuoJiXingLei::_IsSelfEqual (const rg_LuoJiXingLei& objCompare) const
{
    if (rg_value8 != objCompare.rg_value8)  return FALSE;
    return TRUE;
}

void rg_LuoJiXingLei::_CopySelfFrom (const rg_LuoJiXingLei& objCopyFrom)
{
    rg_value8 = objCopyFrom.rg_value8;
}

void rg_LuoJiXingLei::LoadFromStream (CVolBaseInputStream& stream)
{
    if (stream.IsFoundError ())  return;
    BaseClass::LoadFromStream (stream);
    stream.ReadExact (&rg_value8, sizeof (BOOL));
}

void rg_LuoJiXingLei::SaveIntoStream (CVolBaseOutputStream& stream)
{
    if (stream.IsFoundError ())  return;
    BaseClass::SaveIntoStream (stream);
    stream.write (&rg_value8, sizeof (BOOL));
}

}
