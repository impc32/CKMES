﻿
// Generated by Volcano Development Platform - http://www.voldp.com

#ifndef __VCLS_RG_VOLCANO_BASE_RG_DONGTAIKUCHENGXULEI_H__
#define __VCLS_RG_VOLCANO_BASE_RG_DONGTAIKUCHENGXULEI_H__

namespace rg_volcano_base
{

class rg_DongTaiKuChengXuLei : public rg_ChengXuLei
{
    DECLARE_EMPTY_VOL_CLASS (rg_volcano_base, rg_DongTaiKuChengXuLei)

public:
    virtual BOOL rg_RuKouTongZhi (INT64 rg_MoKuaiGouBing, INT rg_DiaoYongYuanYin, INT64 rg_BaoLiuZhiZhen);
    virtual void rg_JiangBeiXieZai ();
    inline_ rg_DongTaiKuChengXuLei () { }
    inline_ void _VolObjectInitMembers () { }
};

}

#endif  //__VCLS_RG_VOLCANO_BASE_RG_DONGTAIKUCHENGXULEI_H__
