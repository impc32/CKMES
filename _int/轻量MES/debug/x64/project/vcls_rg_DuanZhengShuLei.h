﻿
// Generated by Volcano Development Platform - http://www.voldp.com

#ifndef __VCLS_RG_VOLCANO_BASE_RG_DUANZHENGSHULEI_H__
#define __VCLS_RG_VOLCANO_BASE_RG_DUANZHENGSHULEI_H__

namespace rg_volcano_base
{

class rg_DuanZhengShuLei : public CVolBaseDataType
{
    DECLARE_VOL_CLASS (rg_volcano_base, rg_DuanZhengShuLei)

public:
    virtual void* GetDataPtr () override  { return &rg_value1; }
    virtual void GetDumpString (CVolString& strDump, INT nMaxDumpSize) override  { strDump.SetValueText (rg_value1); }

public:
    rg_DuanZhengShuLei ();
    void _VolObjectInitMembers ();
    virtual void LoadFromStream (CVolBaseInputStream& stream) override;
    virtual void SaveIntoStream (CVolBaseOutputStream& stream) override;

public:
    SHORT rg_value1;
};

}

#endif  //__VCLS_RG_VOLCANO_BASE_RG_DUANZHENGSHULEI_H__
