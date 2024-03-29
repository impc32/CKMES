﻿
// Generated by Volcano Development Platform - http://www.voldp.com

#ifndef __VOL_USER_APP_H__
#define __VOL_USER_APP_H__

#include "vol_user_app_info.h"

namespace rg_volcano_app
{
    class rg_my_main_window;
    class rg_startup_class;
}

namespace rg_volcano_base
{
    class rg_WenBenShuZuLei;
    class rg_KuoZhanDuiXiangLei;
    class rg_ZiJieLei;
    class rg_ZiFuLei;
    class rg_BianZhengShuLei;
    class rg_ChanJingDuXiaoShuLei;
    class rg_LuoJiXingLei;
    class rg_LiuChengKongZhiLei;
    class rg_ChengXuLei;
    class rg_DongTaiKuChengXuLei;
    class rg_ShuRuLiuLei;
    class rg_WenBenLei;
    class rg_ShuChuLiuLei;
    class rg_JiBenLiuLei;
    class rg_ChuangKouChengXuLei;
    class rg_ChengXuDiaoShiLei;
    class rg_JieGouJiChuLei;
    class rg_XiaoShuLei;
    class rg_ChangZhengShuLei;
    class rg_ZhengShuLei;
    class rg_DuanZhengShuLei;
    class rg_KeSheJiLei;
    class rg_DuiXiangLei;
    class rg_BianZhengShuCanKaoShuZuLei;
    class rg_BianZhengShuShuZuLei;
}

namespace rg_xc_gui
{
    class rg_XuanCaiGunDongShiTu;
    class rg_XuanCaiTabTiao;
    class rg_XuanCaiRiJiKuang;
    class rg_XuanCaiShuXingKuang;
    class rg_ChuangKouShiJian;
    class rg_XuanCaiHuiTu;
    class rg_XuanCaiKeSheJiLei;
    class rg_CheCun_xc;
    class rg_CaiChan_HuiZhiBeiJingJieGou;
    class rg_CaiChan_DanChuChuangKouJieGou;
    class rg_LieBiaoShu_XiangTuoDongJieGou;
    class rg_LieBiao_XiangJieGou;
    class rg_ShuXingKuang_XiangJieGou;
    class rg_XingZhuangWenBen;
    class rg_XingZhuangGIF;
    class rg_XingZhuangZuKuang;
    class rg_XingZhuangBiaoGe;
    class rg_XingZhuangJuXing;
    class rg_XingZhuangTuPian;
    class rg_XingZhuangJiLei;
    class rg_LieBiao_TouXiangJieGou;
    class rg_LieBiaoShiTu_XiangJieGou;
    class rg_LieBiaoShu_XiangJieGou;
    class rg_CaiChan_HuiZhiXiangJieGou;
    class rg_list_box_XiangJieGou;
    class rg_ZuoBiao_xc;
    class xcklei;
    class rg_guibase;
    class rg_YuanSuShiJian;
    class rg_XuanCaiYueLiKuang;
    class rg_XuanCaiGongJuTiao;
    class rg_XuanCaiHuaDongTiao;
    class rg_XuanCaiGunDongTiao;
    class XEleBase;
    class xcann;
    class rg_XuanCaiWenBenLianJie;
    class rg_XuanCaiBuJu;
    class rg_XuanCaiBuJuKuangJia;
    class rg_XuanCaiLieBiao;
    class rg_XuanCaiLieBiaoShiTu;
    class rg_XuanCaiBianJiKuang;
    class rg_XuanCaiDaiMaKuang;
    class rg_XuanCaiZuGeKuang;
    class rg_XuanCaiCaiChanTiao;
    class rg_XuanCaiChuangGe;
    class rg_XuanCaiJinDuTiao;
    class rg_XuanCaiCaiChan;
    class rg_XuanCaiLieBiaoShu;
    class rg_XuanCaiLieBiaoKuang;
    class rg_JiChuYuanSu;
    class WinBase;
    class XWnd;
    class rg_KuangJiaChuangKou;
    class rg_FuDongChuangKou1;
    class rg_MoTaiChuangKou;
    class widgetUI;
    class XWidget;
    class xcguibase;
    class rg_xcbase;
}

#include "vpkg_w_startup.h"

#include "vcls_rg_DuiXiangLei.h"
#include "vcls_rg_KuoZhanDuiXiangLei.h"
#include "vcls_rg_xcbase.h"
#include "vcls_xcguibase.h"
#include "vcls_widgetUI.h"
#include "vcls_XWidget.h"
#include "vcls_rg_JieGouJiChuLei.h"
#include "vcls_XEleBase.h"
#include "vcls_rg_KeSheJiLei.h"
#include "vcls_rg_JiBenLiuLei.h"
#include "vcls_rg_WenBenShuZuLei.h"
#include "vcls_rg_XuanCaiKeSheJiLei.h"
#include "vcls_rg_guibase.h"
#include "vcls_rg_XuanCaiGunDongShiTu.h"
#include "vcls_WinBase.h"
#include "vcls_xcann.h"
#include "vcls_rg_ShuChuLiuLei.h"
#include "vcls_rg_ShuRuLiuLei.h"
#include "vcls_rg_XingZhuangJiLei.h"
#include "vcls_rg_XuanCaiBianJiKuang.h"
#include "vcls_rg_my_main_window.h"
#include "vcls_rg_ChengXuLei.h"
#include "vcls_XWnd.h"
#include "vcls_rg_KuangJiaChuangKou.h"
#include "vcls_rg_XuanCaiBuJu.h"
#include "vcls_rg_XuanCaiBuJuKuangJia.h"
#include "vcls_rg_XuanCaiLieBiaoShiTu.h"
#include "vcls_rg_XuanCaiZuGeKuang.h"
#include "vcls_rg_XuanCaiCaiChanTiao.h"
#include "vcls_rg_XuanCaiJinDuTiao.h"
#include "vcls_rg_XuanCaiTabTiao.h"
#include "vcls_rg_XuanCaiRiJiKuang.h"
#include "vcls_rg_XuanCaiShuXingKuang.h"
#include "vcls_rg_XuanCaiHuiTu.h"
#include "vcls_rg_CheCun_xc.h"
#include "vcls_rg_CaiChan_HuiZhiBeiJingJieGou.h"
#include "vcls_rg_CaiChan_DanChuChuangKouJieGou.h"
#include "vcls_rg_LieBiaoShu_XiangTuoDongJieGou.h"
#include "vcls_rg_LieBiao_XiangJieGou.h"
#include "vcls_rg_XingZhuangWenBen.h"
#include "vcls_rg_XingZhuangGIF.h"
#include "vcls_rg_XingZhuangZuKuang.h"
#include "vcls_rg_startup_class.h"
#include "vcls_rg_XingZhuangBiaoGe.h"
#include "vcls_rg_XingZhuangJuXing.h"
#include "vcls_rg_XingZhuangTuPian.h"
#include "vcls_rg_ShuXingKuang_XiangJieGou.h"
#include "vcls_rg_LieBiao_TouXiangJieGou.h"
#include "vcls_rg_LieBiaoShiTu_XiangJieGou.h"
#include "vcls_rg_LieBiaoShu_XiangJieGou.h"
#include "vcls_rg_CaiChan_HuiZhiXiangJieGou.h"
#include "vcls_rg_list_box_XiangJieGou.h"
#include "vcls_rg_ZuoBiao_xc.h"
#include "vcls_xcklei.h"
#include "vcls_rg_ChuangKouShiJian.h"
#include "vcls_rg_YuanSuShiJian.h"
#include "vcls_rg_XuanCaiYueLiKuang.h"
#include "vcls_rg_XuanCaiGongJuTiao.h"
#include "vcls_rg_XuanCaiHuaDongTiao.h"
#include "vcls_rg_XuanCaiGunDongTiao.h"
#include "vcls_rg_XuanCaiChuangGe.h"
#include "vcls_rg_XuanCaiCaiChan.h"
#include "vcls_rg_XuanCaiDaiMaKuang.h"
#include "vcls_rg_XuanCaiLieBiaoShu.h"
#include "vcls_rg_XuanCaiLieBiao.h"
#include "vcls_rg_XuanCaiLieBiaoKuang.h"
#include "vcls_rg_XuanCaiWenBenLianJie.h"
#include "vcls_rg_JiChuYuanSu.h"
#include "vcls_rg_FuDongChuangKou1.h"
#include "vcls_rg_MoTaiChuangKou.h"
#include "vcls_rg_BianZhengShuLei.h"
#include "vcls_rg_ChanJingDuXiaoShuLei.h"
#include "vcls_rg_WenBenLei.h"
#include "vcls_rg_LiuChengKongZhiLei.h"
#include "vcls_rg_DongTaiKuChengXuLei.h"
#include "vcls_rg_ChuangKouChengXuLei.h"
#include "vcls_rg_ChengXuDiaoShiLei.h"
#include "vcls_rg_LuoJiXingLei.h"
#include "vcls_rg_XiaoShuLei.h"
#include "vcls_rg_ChangZhengShuLei.h"
#include "vcls_rg_ZhengShuLei.h"
#include "vcls_rg_ZiJieLei.h"
#include "vcls_rg_ZiFuLei.h"
#include "vcls_rg_DuanZhengShuLei.h"
#include "vcls_rg_BianZhengShuCanKaoShuZuLei.h"
#include "vcls_rg_BianZhengShuShuZuLei.h"

#endif  // __VOL_USER_APP_H__
