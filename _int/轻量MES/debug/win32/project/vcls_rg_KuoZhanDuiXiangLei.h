﻿
// Generated by Volcano Development Platform - http://www.voldp.com

#ifndef __VCLS_RG_VOLCANO_BASE_RG_KUOZHANDUIXIANGLEI_H__
#define __VCLS_RG_VOLCANO_BASE_RG_KUOZHANDUIXIANGLEI_H__

namespace rg_volcano_base
{

class rg_KuoZhanDuiXiangLei : public CVolObject
{
    DECLARE_EMPTY_VOL_CLASS (rg_volcano_base, rg_KuoZhanDuiXiangLei)

public:
    virtual void GetDumpString (CVolString& rg_ZhanShiNeiRong21, INT rg_ZuiDaZhanShiShuJuCheCun21) override;
    virtual void LoadFromStream (CVolBaseInputStream& rg_LiuDuiXiang42) override;
    virtual void SaveIntoStream (CVolBaseOutputStream& rg_LiuDuiXiang43) override;
    inline_ rg_KuoZhanDuiXiangLei () { }
    inline_ void _VolObjectInitMembers () { }
};

}

#endif  //__VCLS_RG_VOLCANO_BASE_RG_KUOZHANDUIXIANGLEI_H__
