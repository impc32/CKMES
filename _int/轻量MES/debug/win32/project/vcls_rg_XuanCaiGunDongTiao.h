﻿
// Generated by Volcano Development Platform - http://www.voldp.com

#ifndef __VCLS_RG_XC_GUI_RG_XUANCAIGUNDONGTIAO_H__
#define __VCLS_RG_XC_GUI_RG_XUANCAIGUNDONGTIAO_H__

namespace rg_xc_gui
{

class rg_XuanCaiGunDongTiao : public XEleBase
{
    DECLARE_EMPTY_VOL_CLASS (rg_xc_gui, rg_XuanCaiGunDongTiao)

public:
           int OnSBarScroll(HELE hEle,int pos,BOOL *pbHandled);
    public:
        inline_ rg_XuanCaiGunDongTiao(vint hEle):rg_XuanCaiGunDongTiao()    {
            data().SetP(hEle);
        }

public:
    virtual void rg_ZiDongZhuCeShiJian ();
    virtual void rg_ZhuCeShiJian1 (INT rg_ShiJianLeiXing33);
    INT rg_scroll_bar_GunDong (INT rg_GunDongTiaoGouBing, INT rg_WeiZhi19, rg_volcano_base::rg_LuoJiXingLei& rg_ShiFouLanJie128);
    virtual void rg_YiChuShiJian1 (INT rg_ShiJianLeiXing34);
    inline_ rg_XuanCaiGunDongTiao () { }
    inline_ void _VolObjectInitMembers () { }

public:
    void ra_XuanCaiGunDongTiao_scroll_bar_GunDong (VOID_FUNC fnReceiver, CVolEventObjectPointer* pEventReceiver, INT nTagNumber);

protected:
    CVolEventReceiver rw_130;
};

}

#endif  //__VCLS_RG_XC_GUI_RG_XUANCAIGUNDONGTIAO_H__
