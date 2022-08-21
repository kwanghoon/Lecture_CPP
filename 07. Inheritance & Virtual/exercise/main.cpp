#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Creature.h"
#include "Human.h"
#include "Elf.h"
#include "Balrog.h"
#include "Cyberdemon.h"
// #include "HumanAuto.h"
// #include "ElfAuto.h"
// #include "BalrogAuto.h"
// #include "CyberdemonAuto.h"

using namespace std;

void print(Creature* creatures[], int num) {
	cout << endl;
	for (int i = 0; i < num; i++)
		cout << creatures[i]->getSpecies() << " is at " <<
		creatures[i]->getX() << "," <<
		creatures[i]->getY() << "." <<
		" hitpoints=" << creatures[i]->getHitpoints() << ", " << 
		" strength=" << creatures[i]->getStrength() << endl;
	cout << endl;
}

bool isGameOver(Creature* creatures[], int num) {
	// creature[0] is Human and the rest are monsters
	bool meDie = creatures[0]->getHitpoints() <= 0;

	bool allMonstersDie = true;
	for (int i = 1; i < num; i++)
		allMonstersDie = 
			allMonstersDie && (creatures[i]->getHitpoints() <= 0);

	return meDie || allMonstersDie;
}

void moveAll(Creature* creatures[], int num) {
	for (int i = 0; i < num; i++)
		creatures[i]->move(5, 5);  // 5x5 board
}

void battleArena(Creature& c1, Creature& c2) {
	int hit1 = c1.getHitpoints();
	int hit2 = c2.getHitpoints();

	int damageBy1 = c1.getDamage();
	hit2 = hit2 - damageBy1;
	cout << c2.getSpecies() << " has "
		<< hit2 << " hit points." << endl;

	int damageBy2 = c2.getDamage();
	hit1 = hit1 - damageBy2;
	cout << c1.getSpecies() << " has "
		<< hit2 << " hit points." << endl;

	c1.setHitpoints(hit1);
	c2.setHitpoints(hit2);
}

void playGame(Creature* creatures[], int num) {
	while (isGameOver(creatures, num) == false) {
		print(creatures, num);

		moveAll(creatures, num);

		for(int i=1; i<num; i++) {
			if (creatures[0]->getX() == creatures[i]->getX()
				&& creatures[0]->getY() == creatures[i]->getY()) {
				battleArena(*creatures[0], *creatures[i]);
			}
		} 
	}
	print(creatures, num);
}

/*
void replay(Creature* creatures[], int num) {
	for (int i = 0; i < num; i++)
		creatures[i]->initializeAutoplay();

	Creature::setAutoplay(true);

	playGame(creatures, num);
}
*/

int main() {
	srand(static_cast<int>(time(NULL)));

	Human h(50, 50, 3, 3);
	Elf e(50, 50, 0, 3);
	Balrog b(50, 50, 3, 0);
	Cyberdemon c(50, 50, 4, 3);

	// creature[0] is Human and the rest are monsters
	Creature* creatures[] = { &h, &e, &b, &c };
	playGame(creatures, 4);

	// 	replay(creatures, 4);
}



<!DOCTYPE html>
<html  >
<head>
    <meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1" />
	<meta charset="utf-8" />
    <title>전남대학교 e클래스</title>

	<meta name="description" content="Common form elements and layouts" />
	<meta name="viewport" content="width=device-width, initial-scale=1.0, maximum-scale=1.0" />
    
	<!-- bootstrap & fontawesome -->
	<link rel="stylesheet" href="/Common2/assets/css/bootstrap.css" />
	<link rel="stylesheet" href="/Common2/assets/css/font-awesome.css" />

	<!-- page specific plugin styles -->
	<link rel="stylesheet" href="/Common2/assets/css/jquery-ui.css" />
	<link rel="stylesheet" href="/Common2/assets/css/jquery-ui.custom.css" />
	<link rel="stylesheet" href="/Common2/assets/css/chosen.css" />
	<link rel="stylesheet" href="/Common2/assets/css/datepicker.css" />
	<link rel="stylesheet" href="/Common2/assets/css/bootstrap-timepicker.css" />
	<link rel="stylesheet" href="/Common2/assets/css/daterangepicker.css" />
	<link rel="stylesheet" href="/Common2/assets/css/bootstrap-datetimepicker.css" />
	<link rel="stylesheet" href="/Common2/assets/css/colorpicker.css" />

	<!-- text fonts -->
	<link rel="stylesheet" href="/Common2/assets/css/ace-fonts.css" />

	<!-- ace styles -->
	<link rel="stylesheet" href="/Common2/assets/css/ace.css" class="ace-main-stylesheet" id="main-ace-style" />

	<!--[if lte IE 9]>
		<link rel="stylesheet" href="/Common2/assets/css/ace-part2.css" class="ace-main-stylesheet" />
	<![endif]-->

	<!--[if lte IE 9]>
	  <link rel="stylesheet" href="/Common2/assets/css/ace-ie.css" />
	<![endif]-->

	<!-- inline styles related to this page -->

	<!-- ace settings handler -->
	<script src="/Common2/assets/js/ace-extra.js"></script>

	<!-- HTML5shiv and Respond.js for IE8 to support HTML5 elements and media queries -->

	<!--[if lte IE 8]>
	<script src="/Common2/assets/js/html5shiv.js"></script>
	<script src="/Common2/assets/js/respond.js"></script>
	<![endif]-->
	
	<!-- ace styles -->
	<link rel="stylesheet" href="/Common2/css/eclass_main.css" class="ace-main-stylesheet"  />
	
	<!-- basic scripts -->

    <!--[if !IE]> -->
    <script type="text/javascript">
        window.jQuery || document.write("<script src='/Common2/assets/js/jquery.js'>"+"<"+"/script>");
    </script>

    <!-- <![endif]-->

    <!--[if IE]>
    <script type="text/javascript">
    window.jQuery || document.write("<script src='/Common2/assets/js/jquery1x.js'>"+"<"+"/script>");
    </script>
    <![endif]-->
    <script type="text/javascript">
        if('ontouchstart' in document.documentElement) document.write("<script src='/Common2/assets/js/jquery.mobile.custom.js'>"+"<"+"/script>");
    </script>
    <script src="/Common2/assets/js/bootstrap.js"></script>

    <!-- page specific plugin scripts -->

    <!--[if lte IE 8]>
      <script src="/Common2/assets/js/excanvas.js"></script>
    <![endif]-->
    <script src="/Common2/assets/js/jquery-ui.js"></script>

    <script src="/Common2/assets/js/jquery-ui.custom.js"></script>
    <script src="/Common2/assets/js/jquery.ui.touch-punch.js"></script>
    
    <script src="/Common2/assets/js/jquery.knob.js"></script>
    <script src="/Common2/assets/js/jquery.autosize.js"></script>
    <script src="/Common2/assets/js/bootstrap-tag.js"></script>

    <!-- ace scripts -->
    <script src="/Common2/assets/js/ace/elements.scroller.js"></script>
    <script src="/Common2/assets/js/ace/elements.colorpicker.js"></script>
    <script src="/Common2/assets/js/ace/elements.fileinput.js"></script>
    <script src="/Common2/assets/js/ace/elements.typeahead.js"></script>
    <script src="/Common2/assets/js/ace/elements.wysiwyg.js"></script>
    <script src="/Common2/assets/js/ace/elements.spinner.js"></script>
    <script src="/Common2/assets/js/ace/elements.treeview.js"></script>
    <script src="/Common2/assets/js/ace/elements.wizard.js"></script>
    <script src="/Common2/assets/js/ace/elements.aside.js"></script>
    <script src="/Common2/assets/js/ace/ace.js"></script>
    <script src="/Common2/assets/js/ace/ace.ajax-content.js"></script>
    <script src="/Common2/assets/js/ace/ace.touch-drag.js"></script>
    <script src="/Common2/assets/js/ace/ace.sidebar.js"></script>
    <script src="/Common2/assets/js/ace/ace.sidebar-scroll-1.js"></script>
    <script src="/Common2/assets/js/ace/ace.submenu-hover.js"></script>
    <script src="/Common2/assets/js/ace/ace.widget-box.js"></script>
    <script src="/Common2/assets/js/ace/ace.settings.js"></script>
    <script src="/Common2/assets/js/ace/ace.settings-rtl.js"></script>
    <script src="/Common2/assets/js/ace/ace.settings-skin.js"></script>
    <script src="/Common2/assets/js/ace/ace.widget-on-reload.js"></script>
    <script src="/Common2/assets/js/ace/ace.searchbox-autocomplete.js"></script>

    <!-- the following scripts are used in demo only for onpage help and you don't need them -->
    <link rel="stylesheet" href="/Common2/assets/css/ace.onpage-help.css" />
    <script type="text/javascript"> ace.vars['base'] = '..'; </script>
    <script src="/Common2/assets/js/ace/elements.onpage-help.js"></script>
    <script src="/Common2/assets/js/ace/ace.onpage-help.js"></script>
    
    <script src="/Common/ckeditor2/ckeditor.js?v=4.0"></script>
    
    
    <script language="javascript" type="text/javascript">
	    // 전역 변수 설정
		
	    // 폼 로드 이벤트 핸들러 작성
	    /*******************************************************
	    작 성 자  : 회사명 개발자명(2007년 XX월 XX일)
	    작성목적  :
	    *******************************************************/
	    function PageLoad()
	    {
	   	    // 전역 변수 초기화, 초기화시 수행될 작업 처리
	    }
		
	    // PageBeforeUnload 이벤트 핸들러 작성
	    /*******************************************************
	    작 성 자  : 회사명 개발자명(2007년 XX월 XX일)
	    작성목적  :
	    *******************************************************/
	    function PageBeforeUnLoad()
	    {
		    // 폼 닫을 때 사용자 확인이 필요할 때, 확인사항 메시지 리턴
		    // 사용자 확인이 필요 없을 시 리턴 하지 않음.
		    // return "창을 닫을 때 출력할 메시지";
	    }
		
	    // 사용자 Client Script 영역
	    /*******************************************************
	    작 성 자  : 회사명 개발자명(2007년 XX월 XX일)
	    작성목적  :
	    *******************************************************/
        
    </script>
    
    <script type="text/javascript">
	jQuery(function($) {
	
		// scrollables
		$('.scrollable').each(function () {
			var $this = $(this);
			$(this).ace_scroll({
				size: $this.attr('data-size') || 100,
				//styleClass: 'scroll-left scroll-margin scroll-thin scroll-dark scroll-light no-track scroll-visible'
			});
		});
		$('.scrollable-horizontal').each(function () {
			var $this = $(this);
			$(this).ace_scroll(
			  {
				horizontal: true,
				styleClass: 'scroll-top',//show the scrollbars on top(default is bottom)
				size: $this.attr('data-size') || 500,
				mouseWheelLock: true
			  }
			).css({'padding-top': 12});
		});
		
		$(window).on('resize.scroll_reset', function() {
			$('.scrollable-horizontal').ace_scroll('reset');
		});
	});	
	
    </script>
    
	<script type="text/javascript" src="http://ajax.googleapis.com/ajax/libs/jquery/1.9.1/jquery.min.js"></script>
    
    
    
    <!-- 메인메뉴 -->
    <script type='text/javascript' src="/Common2/js/jquery.hoverIntent.minified.js"></script>
    <script type='text/javascript' src="/Common2/js/jquery.dcmegamenu.1.2.js"></script>
    <script type="text/javascript">
    $(document).ready(function($){
	    
	    $('#mega-menu-7').dcMegaMenu({
		    rowItems: '3',
		    speed: 'fast',
		    effect: 'slide'
	    });
	   
    });
    </script>
    
    
	<!-- 강의 슬라이드 -->
    
    
    <link rel="stylesheet" type="text/css" href="/Common2/css/style2.css" />
	<script type="text/javascript" src="/Common2/js/modernizr.custom.28468.js"></script>
	<noscript>
	    <link rel="stylesheet" type="text/css" href="/Common2/css/nojs.css" />
	</noscript>
	
	<script type="text/javascript" src="/Common2/js/jquery.cslider.js"></script>
	<script type="text/javascript">
		$(function() {
		
			$('#da-slider').cslider({
				autoplay	: true,
				bgincrement	: 450
			});
		
		});
	</script>
    
    <link href="/Common2/css/metro-bootstrap.css" rel="stylesheet" />
    <link href="/Common2/css/metro-bootstrap-responsive.css" rel="stylesheet" />
    
    <script src="/Common2/assets/js/jquery.widget.min.js"></script>
    <script src="/Common2/js/metro-listview.js"></script>
    
    <link rel="stylesheet" href="/Common2/css/eclass_main_default.css"   />
    
    <style>
    
        body {
            font-family: Arial, sans-serif;
        }
        
        .dropdown-preview {
		    margin: 0 5px;
			display: inline-block;
		}
		.dropdown-preview  > .dropdown-menu {
		    display: block;
			position: static;
			margin-bottom: 5px;
		}
		
		.subpage_bg {
          color:#828282;
          margin : 20px 0 10px 5px;
          
        }


        .highlight-bk {
	        background-color:#ff3333;
            padding:1px;
            width:100%;
        }

        .highlight {
	        color:#3A9225;
        }
          
        h4.highlight  {
	        padding-top:13px;
            padding-bottom:14px;
  	        border-bottom:2px solid #3A9225;
  	        text-shadow : 1px 1px 1px rgba(0,0,0,0.1);
  	        font-weight:600;
          	
        }
        
        .sub_left_menu > a {
            color : #888888;
            font-size : 14px;
            font-weight:600;
        }

        .caret {
	        color:#fff;
        }

        .panel {
	        padding-left:27px;
            padding-right:27px;
            border-left : 1px #eeeeee solid;
        }

      
		
	</style>
	
	<!-- SSO관련-->
	<script type="text/javascript" src="http://arsam.jnu.ac.kr/Common/Scripts/websso.js"></script>
    <script type="text/javascript" src="http://www.jnu.ac.kr/Common/Scripts/Common.js"></script>
    <script type="text/jscript">
        
        //writeSSOControl("ctlSSO", "sso.jnu.ac.kr/AuthServer/netsocx/");
    	
        function onLogout()
        {
            location.href="https://portal.jnu.ac.kr/logout/Default.aspx";
            //window.open("/user/close.html","JNUEClassRoom");	
            //if(deleteCRMInfo(document.all["ctlSSO"])){
                //MOSS에서 생성된 쿠키를 삭제합니다.
                //_spSignOut();
                    
                //window.location.reload();
            //}
        }    
        
        function _spSignOut()
        {
            uSetCookieSSO('SSOValidate', '');
            uSetCookieSSO('WebSSOInfo', '');
            uSetCookieSSO('Number', '');
            uSetCookieSSO('MOSS', '');
            uSetCookieSSO('ECS', '');
            uSetCookieECS('ECS', '');
            uSetCookieECS('ECSUserNo', '');
            uSetCookieECS('ECSUserID', '');
            uSetCookieECS('Lang', '');
            uSetCookieSSO('secUserID', '');
            uSetCookieSSO('secEmployeeName', '');
            uSetCookieSSO('secEmployeeNo', '');
            uSetCookieSSO('libUserID', '');
            uSetCookieSSO('secSelectedEmpNo', '');
            uSetCookieSSO('SecUserDutyCode', '');
            uSetCookieSSO('SecUserDept', '');
            uSetCookieSSO('SelectedEmpNo', '');
            uSetCookieSSO('ARSAM', '');
            uSetCookieSSO('UserNo', '');
            uSetCookieSSO('secExt1', '');
            uSetCookieSSO('secExt2', '');
            uSetCookieSSO('secExt3', '');
            uSetCookieSSO('mobile', '');
            uSetCookieSSO('secDepartment', '');
            uSetCookieSSO('ArsamID', '');
            uSetCookieSSO('ArsamFailID', '');
            uSetCookieSSO('MSOWebPartPage_AnonymousAccessCookie', '');
        }
    	
        function uSetCookieSSO(name, value) {
            var oNow = new Date();
            oNow.setDate(oNow.getDate() - 1);        
            document.cookie = name + "=" + escape(value) + ";path=/;domain=.jnu.ac.kr;expires=" + oNow.toGMTString();        
        }
        
        function uSetCookieECS(name, value) {
            var oNow = new Date();
            oNow.setDate(oNow.getDate() - 1);                    
            document.cookie = name + "=" + escape(value) + ";path=/;expires=" + oNow.toGMTString();
        }
        /*******************************************************
        작 성 자 		: 전남대 포탈 여민호(2007년 10월 01일)
        작성목적     		:  팝업창을 오픈한다.
        Parameter     	:	argSrc			: 팝업에 표시할 페이지(value)
			                argName			: 팝업창 이름(value)
			                argWidth		: 팝업창 가로길이
			                argHeight		: 팝업창 세로길이
			                argTop			: 팝업창 상단여백
			                argLeft			: 팝업창 왼쪽여백
			                argCenterYN		: 팝업창을 화면 중앙에 띄울지 여부
			                argMenubar		: 메뉴바 표시여부
			                argToolbar		: 툴바 표시여부
			                argDirectories	: 디렉토리바 표시여부
			                argScrollbars	: 스크롤바 표시여부
			                argStatus		: 상태바 표시여부
			                argLocation		: 주소표시줄 표시여부
			                argResizable	: 크기조정 가능여부
			                argFullscreen	: 전체화면으로 표싱부
        반환 값       	: 	None
        사용예       	:	OpenPopup('http://arsam.jnu.ac.kr','TEST',200,200,50,50,'no','no','no','no','no','no','no','no','no')
			                OpenPopup('http://arsam.jnu.ac.kr','TEST',200,200,50,50,'yes')
			                OpenPopup('http://arsam.jnu.ac.kr','TEST',200,200,50,50)
        1차 수정			: 
        *******************************************************/
        function OpenPopup(argSrc, argName, argWidth, argHeight, argTop, argLeft, argCenterYN, argMenubar, argToolbar, argDirectories, argScrollbars, argStatus, argLocation, argResizable, argFullscreen ){
            var properties = "width="+argWidth+",height="+argHeight;
            if(argCenterYN == 'yes') {
                var sw = screen.availWidth;
                var sh = screen.availHeight;
                var left = (sw - argWidth)/2;
                var top = (sh - argHeight)/2;
                if(argTop != null) properties += ",top="+top;
                if(argLeft != null) properties += ",left="+left;
            }else{
                if(argTop != null) properties += ",top="+argTop;
                if(argLeft != null) properties += ",left="+argLeft;
            }

            if(argMenubar != null) properties += ",menubar="+argMenubar;
            if(argToolbar != null) properties += ",toolbar="+argToolbar;
            if(argDirectories != null) properties += ",directories="+argDirectories;
            if(argScrollbars != null) properties += ",scrollbars="+argScrollbars;
            if(argStatus != null) properties += ",status="+argStatus;
            if(argLocation != null) properties += ",location="+argLocation;
            if(argResizable != null) properties += ",resizable="+argResizable;
            if(argFullscreen != null) properties += ",fullscreen="+argFullscreen;	
    		
            var openPop = window.open(argSrc,argName,properties);
        }
    </script>

	
</head>
<body class="no-skin">
<form name="aspnetForm" method="post" action="FileDownLoad.aspx?ReportNo=62751&amp;Field=2" id="aspnetForm">
<div>
<input type="hidden" name="errorMessage" id="errorMessage" value="" />
<input type="hidden" name="informationMessage" id="informationMessage" value="" />
<input type="hidden" name="confirmMessage" id="confirmMessage" value="" />
<input type="hidden" name="ReporRootPath" id="ReporRootPath" value="http://eclass.jnu.ac.kr/Common/Report" />
<input type="hidden" name="JNURootPath" id="JNURootPath" value="http://eclass.jnu.ac.kr" />
<input type="hidden" name="JNUWebCommonPath" id="JNUWebCommonPath" value="http://eclass.jnu.ac.kr/Common" />
<input type="hidden" name="__EVENTTARGET" id="__EVENTTARGET" value="" />
<input type="hidden" name="__EVENTARGUMENT" id="__EVENTARGUMENT" value="" />
<input type="hidden" name="__VIEWSTATE" id="__VIEWSTATE" value="/wEPDwUENTM4MQ9kFgJmD2QWAgIBD2QWAgIDD2QWBAIBDw8WAh4HVmlzaWJsZWhkZAIDD2QWAgIDDw8WAh4EVGV4dAUn7KCE7J6Q7Lu07ZOo7YSw6rO17ZWZ67aAJm5ic3A77LWc6rSR7ZuIZGRkXyA5phrFTsNtkYGGl0gaBxbsEso=" />
</div>

<script type="text/javascript">
//<![CDATA[
var theForm = document.forms['aspnetForm'];
if (!theForm) {
    theForm = document.aspnetForm;
}
function __doPostBack(eventTarget, eventArgument) {
    if (!theForm.onsubmit || (theForm.onsubmit() != false)) {
        theForm.__EVENTTARGET.value = eventTarget;
        theForm.__EVENTARGUMENT.value = eventArgument;
        theForm.submit();
    }
}
//]]>
</script>


<script src="/User/WebResource.axd?d=nhWBWeAPpIwv7aHkfN6SSRvDQyXNZMVnyX9xt6bq229mjqh8_IlAHMRFxexw7QlMvtdOfwmb7t-4FVCj4SIm0aBKL9Y1&amp;t=636284957271971599" type="text/javascript"></script>

<script language='javascript' type='text/javascript'>function deleteCRMInfo(ctlSSO){if(!deleteCredential('devarsam.jnu.ac.kr', ctlSSO)){alert('사용자 자격증명 정보를 삭제하는 동안 오류가 발생했습니다.');return false;}if(!deleteCredential('arsam.jnu.ac.kr', ctlSSO)){alert('사용자 자격증명 정보를 삭제하는 동안 오류가 발생했습니다.');return false;}if(!deleteCredential('mailweb1.jnu.ac.kr', ctlSSO)){alert('사용자 자격증명 정보를 삭제하는 동안 오류가 발생했습니다.');return false;}if(!deleteCredential('hak.jnu.ac.kr', ctlSSO)){alert('사용자 자격증명 정보를 삭제하는 동안 오류가 발생했습니다.');return false;}if(!deleteCredential('mailweb2.jnu.ac.kr', ctlSSO)){alert('사용자 자격증명 정보를 삭제하는 동안 오류가 발생했습니다.');return false;}if(!deleteCredential('my.jnu.ac.kr', ctlSSO)){alert('사용자 자격증명 정보를 삭제하는 동안 오류가 발생했습니다.');return false;}if(!deleteCredential('devhak.jnu.ac.kr', ctlSSO)){alert('사용자 자격증명 정보를 삭제하는 동안 오류가 발생했습니다.');return false;}if(!deleteCredential('devpwa.jnu.ac.kr', ctlSSO)){alert('사용자 자격증명 정보를 삭제하는 동안 오류가 발생했습니다.');return false;}if(!deleteCredential('devreporting.jnu.ac.kr', ctlSSO)){alert('사용자 자격증명 정보를 삭제하는 동안 오류가 발생했습니다.');return false;}if(!deleteCredential('email.jnu.ac.kr', ctlSSO)){alert('사용자 자격증명 정보를 삭제하는 동안 오류가 발생했습니다.');return false;}if(!deleteCredential('email.chonnam.ac.kr', ctlSSO)){alert('사용자 자격증명 정보를 삭제하는 동안 오류가 발생했습니다.');return false;}if(!deleteCredential('maildb1.jnu.ac.kr', ctlSSO)){alert('사용자 자격증명 정보를 삭제하는 동안 오류가 발생했습니다.');return false;}if(!deleteCredential('portal.jnu.ac.kr', ctlSSO)){alert('사용자 자격증명 정보를 삭제하는 동안 오류가 발생했습니다.');return false;}if(!deleteCredential('portal.chonnam.ac.kr', ctlSSO)){alert('사용자 자격증명 정보를 삭제하는 동안 오류가 발생했습니다.');return false;}if(!deleteCredential('dwdb.jnu.ac.kr', ctlSSO)){alert('사용자 자격증명 정보를 삭제하는 동안 오류가 발생했습니다.');return false;}if(!deleteCredential('new.jnu.ac.kr', ctlSSO)){alert('사용자 자격증명 정보를 삭제하는 동안 오류가 발생했습니다.');return false;}if(!deleteCredential('admission.jnu.ac.kr', ctlSSO)){alert('사용자 자격증명 정보를 삭제하는 동안 오류가 발생했습니다.');return false;}if(!deleteCredential('admgraduate.jnu.ac.kr', ctlSSO)){alert('사용자 자격증명 정보를 삭제하는 동안 오류가 발생했습니다.');return false;}if(!deleteCredential('international.jnu.ac.kr', ctlSSO)){alert('사용자 자격증명 정보를 삭제하는 동안 오류가 발생했습니다.');return false;}if(!deleteCredential('webgs.jnu.ac.kr', ctlSSO)){alert('사용자 자격증명 정보를 삭제하는 동안 오류가 발생했습니다.');return false;}if(!deleteCredential('newyounsu.jnu.ac.kr', ctlSSO)){alert('사용자 자격증명 정보를 삭제하는 동안 오류가 발생했습니다.');return false;}if(!deleteCredential('www.jnu.ac.kr', ctlSSO)){alert('사용자 자격증명 정보를 삭제하는 동안 오류가 발생했습니다.');return false;}if(!deleteCredential('graduate.jnu.ac.kr', ctlSSO)){alert('사용자 자격증명 정보를 삭제하는 동안 오류가 발생했습니다.');return false;}if(!deleteCredential('college.jnu.ac.kr', ctlSSO)){alert('사용자 자격증명 정보를 삭제하는 동안 오류가 발생했습니다.');return false;}if(!deleteCredential('department.jnu.ac.kr', ctlSSO)){alert('사용자 자격증명 정보를 삭제하는 동안 오류가 발생했습니다.');return false;}if(!deleteCredential('major.jnu.ac.kr', ctlSSO)){alert('사용자 자격증명 정보를 삭제하는 동안 오류가 발생했습니다.');return false;}if(!deleteCredential('research.jnu.ac.kr', ctlSSO)){alert('사용자 자격증명 정보를 삭제하는 동안 오류가 발생했습니다.');return false;}if(!deleteCredential('business.jnu.ac.kr', ctlSSO)){alert('사용자 자격증명 정보를 삭제하는 동안 오류가 발생했습니다.');return false;}if(!deleteCredential('attachment.jnu.ac.kr', ctlSSO)){alert('사용자 자격증명 정보를 삭제하는 동안 오류가 발생했습니다.');return false;}if(!deleteCredential('office.jnu.ac.kr', ctlSSO)){alert('사용자 자격증명 정보를 삭제하는 동안 오류가 발생했습니다.');return false;}if(!deleteCredential('younsu.jnu.ac.kr', ctlSSO)){alert('사용자 자격증명 정보를 삭제하는 동안 오류가 발생했습니다.');return false;}if(!deleteCredential('admyounsu.jnu.ac.kr', ctlSSO)){alert('사용자 자격증명 정보를 삭제하는 동안 오류가 발생했습니다.');return false;}if(!deleteCredential('gpacnu.jnu.ac.kr', ctlSSO)){alert('사용자 자격증명 정보를 삭제하는 동안 오류가 발생했습니다.');return false;}if(!deleteCredential('csea.jnu.ac.kr', ctlSSO)){alert('사용자 자격증명 정보를 삭제하는 동안 오류가 발생했습니다.');return false;}if(!deleteCredential('darchi.jnu.ac.kr', ctlSSO)){alert('사용자 자격증명 정보를 삭제하는 동안 오류가 발생했습니다.');return false;}if(!deleteCredential('mbioedu.jnu.ac.kr', ctlSSO)){alert('사용자 자격증명 정보를 삭제하는 동안 오류가 발생했습니다.');return false;}if(!deleteCredential('support.jnu.ac.kr', ctlSSO)){alert('사용자 자격증명 정보를 삭제하는 동안 오류가 발생했습니다.');return false;}if(!deleteCredential('women.jnu.ac.kr', ctlSSO)){alert('사용자 자격증명 정보를 삭제하는 동안 오류가 발생했습니다.');return false;}if(!deleteCredential('dormitory.jnu.ac.kr', ctlSSO)){alert('사용자 자격증명 정보를 삭제하는 동안 오류가 발생했습니다.');return false;}if(!deleteCredential('his.jnu.ac.kr', ctlSSO)){alert('사용자 자격증명 정보를 삭제하는 동안 오류가 발생했습니다.');return false;}if(!deleteCredential('cnutour.jnu.ac.kr', ctlSSO)){alert('사용자 자격증명 정보를 삭제하는 동안 오류가 발생했습니다.');return false;}if(!deleteCredential('homeapp.jnu.ac.kr', ctlSSO)){alert('사용자 자격증명 정보를 삭제하는 동안 오류가 발생했습니다.');return false;}if(!deleteCredential('cnutoday.jnu.ac.kr', ctlSSO)){alert('사용자 자격증명 정보를 삭제하는 동안 오류가 발생했습니다.');return false;}if(!deleteCredential('portalsrch1.chonnam.ac.kr', ctlSSO)){alert('사용자 자격증명 정보를 삭제하는 동안 오류가 발생했습니다.');return false;}if(!deleteCredential('portalsrch1.jnu.ac.kr', ctlSSO)){alert('사용자 자격증명 정보를 삭제하는 동안 오류가 발생했습니다.');return false;}if(!deleteCredential('rechinfo.jnu.ac.kr', ctlSSO)){alert('사용자 자격증명 정보를 삭제하는 동안 오류가 발생했습니다.');return false;}if(!deleteCredential('eduup.jnu.ac.kr', ctlSSO)){alert('사용자 자격증명 정보를 삭제하는 동안 오류가 발생했습니다.');return false;}if(!deleteCredential('home.jnu.ac.kr', ctlSSO)){alert('사용자 자격증명 정보를 삭제하는 동안 오류가 발생했습니다.');return false;}if(!deleteCredential('fund.jnu.ac.kr', ctlSSO)){alert('사용자 자격증명 정보를 삭제하는 동안 오류가 발생했습니다.');return false;}return true;}</script>
<script src="http://eclass.jnu.ac.kr/Common/Javascript/Const.js" type="text/javascript"></script>
<script src="http://eclass.jnu.ac.kr/Common/Javascript/Common.js" type="text/javascript"></script>
<script src="http://eclass.jnu.ac.kr/Common/Javascript/ControlUtil.js" type="text/javascript"></script>
<script src="http://eclass.jnu.ac.kr/Common/Javascript/PageEvent.js" type="text/javascript"></script>
<script src="http://eclass.jnu.ac.kr/Common/Javascript/Util.js" type="text/javascript"></script>
<script src="http://eclass.jnu.ac.kr/Common/Javascript/Validation.js" type="text/javascript"></script>
<script src="http://eclass.jnu.ac.kr/Common/Javascript/ReportUtil.js" type="text/javascript"></script>
<script src="/User/ScriptResource.axd?d=YblUwYm6JkfO050PiFPodi_CR_Pum9_mFIvC7dFxIt_Y5a9-GDK4zLYujhrvVFPRq6Gxis59iQVAoOFXJQIIcG6At6tUvn--PHEplfPJjsCfbaYNu1t3JZ7B_8NgmSrO0mnSMScb90BF7IGajRcXUGssqZY1&amp;t=635979585909647968" type="text/javascript"></script>
<script src="/User/ScriptResource.axd?d=p5rKs4boWnz-B8zNmHEY99XQOPNrNo-QmCcV6t_4txpHKfiJmvD8Mnlqo0yG8ylSyuE2NKMtKN_zo8MPXQHp6A7C70V_x4xyX1vqi8C4Xlg_TjArAohP8UJbkEId-p6sp-O1IhHsS0oSaQhZasvP_L0e5TYUiwNuQ0AZJBaJ-UiYl10X0&amp;t=635979585909647968" type="text/javascript"></script>
<div>

	<input type="hidden" name="__VIEWSTATEGENERATOR" id="__VIEWSTATEGENERATOR" value="C43452A9" />
</div>
<script type="text/javascript">
//<![CDATA[
Sys.WebForms.PageRequestManager._initialize('ctl00$ScriptManager1', document.getElementById('aspnetForm'));
Sys.WebForms.PageRequestManager.getInstance()._updateControls([], [], [], 90);
//]]>
</script>
        

<!-- wrap -->
<div id="main_wrap">

    

<!-- 탑메뉴 시작 -->

<div id="top_header">
        
    <div id="top_btn" style="height:60px; width:995px;">
    
        <div style="position:relative; float:left; width:250px; padding-top:20px; text-align:left;">
            
            <img src="/Common2/Images/logo_eclass_n.jpg" alt="e클래스" border="0" usemap="#Map" style="cursor:pointer;"/>
            <map name="Map" id="Map">
                <area shape="rect" coords="0,0,102,44" href="http://portal.jnu.ac.kr/" />
                <area shape="rect" coords="103,-3,267,64" href="/User/Default.aspx" />
            </map>
        
        </div>
        <div style="position:relative; float:right; width:740px; padding-top:27px; padding-right:10px; text-align:right; ">
        
            
            
            <div id="ctl00_header2_LogoutPanel">
	
                
                
                <img src="/Common/images/man_icon.gif" alt="icon" style="vertical-align:middle" />
	            <span id="ctl00_header2_lblLoginUserInfo" style="color:Black;font-weight:bold;">전자컴퓨터공학부&nbsp;최광훈</span>
	            <!--a href="http://arsam.jnu.ac.kr/Helpdesk/member/ModifyInfo/default.aspx"><img src="/Common/images/modify_btn.gif" alt="" style="vertical-align:middle" /></a-->
	            <a href="http://portal.jnu.ac.kr"><img src="/Common/images/portal_btn.gif" alt="" style="vertical-align:middle" /></a>
                <img src="/Common/images/logout_btn.gif" alt="" style="vertical-align:middle;cursor:pointer" onclick="onLogout();return false;" />
                
                
            
</div>
            
        </div>
    
    </div>


    <div class="green">
        <ul id="mega-menu-7" class="mega-menu" style="padding-left:150px;">
            <li ><a href="/User/EClassInfo/Elearning.aspx">e클래스 안내</a>
                <ul>
                    <li><a href="/User/EClassInfo/Elearning.aspx">교내 e클래스</a></li>
                    <li><a href="/User/EClassInfo/HAKSchedule.aspx">학사일정</a></li>
                </ul>
            </li>
            <li><a href="/User/OpenLecture/OpenLectureAttendRequest.aspx?olType=s">우수 이러닝 강좌</a>
                <ul>
                    <li><a href="/User/OpenLecture/OpenLectureAttendRequest.aspx?olType=s">학생</a></li>
                    <li><a href="/User/OpenLecture/OpenLectureAttendRequest.aspx?olType=p">교수</a></li>
                </ul>
            </li>
            <li><a href="/User/Info/Board/ArticleList.aspx?LECNo=0&BID=1">정보광장</a>
                <ul>
                    <li><a href="/User/Info/Board/ArticleList.aspx?LecNo=0&BID=1">공지사항</a></li>
                    <li><a href="/User/Info/Software.aspx">학습S/W 다운로드</a></li>
                </ul>
            </li>
            <li><a href="/User/Help/Qna/ArticleList.aspx?LecNo=0&BID=5">도우미</a>
                <ul>
                    <li><a href="/User/Help/Qna/ArticleList.aspx?LecNo=0&BID=5">e클래스 묻고답하기</a></li>
                </ul>
            </li>
            <li><a href="/User/OpenLecture/OpenLectureAttendRequest.aspx?olType=n">비정규강좌</a>
            </li>
        </ul>
    </div>
    
</div>

<!-- 탑메뉴 끝 -->


    
        
	
	
	
<!-- 카피라잇 테이블 시작 -->
<script>
function showon(obj) 
    {
        if(document.getElementById(obj).style.display == "none") {
             document.getElementById(obj).style.display = "block";

             return false;
        }
        if(document.getElementById(obj).style.display == "block") {
            document.getElementById(obj).style.display = "none";

            return false;
        }
    }
</script>


<div id="main_bottom" style="background-color:#eeeeee;">
		    
    <div class="row">
        <div class="col-xs-5"></div>
        <div class="col-xs-7">
            <p style="font-size : 12px;"><b>(광주캠퍼스)</b> 61186 광주광역시 북구 용봉로 77(용봉동) &nbsp;&nbsp;&nbsp;&nbsp;<i class="fa fa-phone fa-fw"></i> 062-530-5114 &nbsp;&nbsp; <i class="fa fa-fax fa-fw"></i> 062-530-1189</p>
            <p style="font-size : 12px;"><b>(여수캠퍼스)</b> 59626 전라남도 여수시 대학로 50(둔덕동) &nbsp;&nbsp;&nbsp;&nbsp;<i class="fa fa-phone fa-fw"></i> 061-659-6114 &nbsp;&nbsp; <i class="fa fa-fax fa-fw"></i> 061-659-7003</p>
            <p style="font-size : 12px;"><b>Copyright &copy; 2015 By 전남대학교 All rights reserved.</b>
            &nbsp;&nbsp;<a href="http://jnu.ac.kr/MainGuide/Policy/Protection.aspx" style="color:#888888;" target="_blank">개인정보처리방침</a>&nbsp;&nbsp;
            <a href="http://jnu.ac.kr/MainGuide/Rejection/Rejection.aspx" style="color:#888888;" target="_blank">메일무단수집거부</a>
            
            </p>
        </div>        
    </div>

</div>
<!-- 카피라잇 테이블 끝 -->
	
</div>
<!-- //wrap -->












<script type="text/javascript">
//<![CDATA[
function window.onload(){ WindowOnLoad() }Sys.Application.initialize();
//]]>
</script>
</form>
</body>
</html>

