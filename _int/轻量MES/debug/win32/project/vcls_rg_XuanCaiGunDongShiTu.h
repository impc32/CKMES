﻿
// Generated by Volcano Development Platform - http://www.voldp.com

#ifndef __VCLS_RG_XC_GUI_RG_XUANCAIGUNDONGSHITU_H__
#define __VCLS_RG_XC_GUI_RG_XUANCAIGUNDONGSHITU_H__

namespace rg_xc_gui
{

class rg_XuanCaiGunDongShiTu : public XEleBase
{
    DECLARE_EMPTY_VOL_CLASS (rg_xc_gui, rg_XuanCaiGunDongShiTu)

public:
           int OnScrollViewScrollH(HELE hEle,int pos,BOOL *pbHandled);
           int OnScrollViewScrollV(HELE hEle,int pos,BOOL *pbHandled);

public:
    virtual void rg_ZiDongZhuCeShiJian ();
    virtual void rg_ZhuCeShiJian1 (INT rg_ShiJianLeiXing35);
    INT rg_GunDongShiTu_ShuiPingGunDong (INT rg_GunDongGouBing, INT rg_WeiZhi21, rg_volcano_base::rg_LuoJiXingLei& rg_ShiFouLanJie129);
    INT rg_GunDongShiTu_ChuiZhiGunDong (INT rg_GunDongGouBing1, INT rg_WeiZhi22, rg_volcano_base::rg_LuoJiXingLei& rg_ShiFouLanJie130);
    virtual void rg_YiChuShiJian1 (INT rg_ShiJianLeiXing36);
    virtual INT rg_ChuangJian9 (INT rg_ZuoBian54, INT rg_DingBian54, INT rg_KuanDu62, INT rg_GaoDu62, INT rg_FuGouBing27);
    inline_ rg_XuanCaiGunDongShiTu () { }
    inline_ void _VolObjectInitMembers () { }

public:
    void ra_XuanCaiGunDongShiTu_GunDongShiTu_ShuiPingGunDong (VOID_FUNC fnReceiver, CVolEventObjectPointer* pEventReceiver, INT nTagNumber);
    void ra_XuanCaiGunDongShiTu_GunDongShiTu_ChuiZhiGunDong (VOID_FUNC fnReceiver, CVolEventObjectPointer* pEventReceiver, INT nTagNumber);

protected:
    CVolEventReceiver rw_131;
    CVolEventReceiver rw_132;
};

}

#endif  //__VCLS_RG_XC_GUI_RG_XUANCAIGUNDONGSHITU_H__
