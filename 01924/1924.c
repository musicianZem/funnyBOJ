#include <stdio.h>
int main() {
	int m, d, h;
	scanf("%d %d", &m, &d);
	h = 100*m + d;
	switch( h ) {
	case 101:case 108:case 115:case 122:case 129:case 205:case 212:case 219:case 226:case 305:case 312:case 319:case 326:case 402:case 409:case 416:case 423:case 430:case 507:case 514:case 521:case 528:case 604:case 611:case 618:case 625:case 702:case 709:case 716:case 723:case 730:case 806:case 813:case 820:case 827:case 903:case 910:case 917:case 924:case 1001:case 1008:case 1015:case 1022:case 1029:case 1105:case 1112:case 1119:case 1126:case 1203:case 1210:case 1217:case 1224:case 1231:	
		printf("MON"); break;
	case 102:case 109:case 116:case 123:case 130:case 206:case 213:case 220:case 227:case 306:case 313:case 320:case 327:case 403:case 410:case 417:case 424:case 501:case 508:case 515:case 522:case 529:case 605:case 612:case 619:case 626:case 703:case 710:case 717:case 724:case 731:case 807:case 814:case 821:case 828:case 904:case 911:case 918:case 925:case 1002:case 1009:case 1016:case 1023:case 1030:case 1106:case 1113:case 1120:case 1127:case 1204:case 1211:case 1218:case 1225:
		printf("TUE"); break;
	case 103:case 110:case 117:case 124:case 131:case 207:case 214:case 221:case 228:case 307:case 314:case 321:case 328:case 404:case 411:case 418:case 425:case 502:case 509:case 516:case 523:case 530:case 606:case 613:case 620:case 627:case 704:case 711:case 718:case 725:case 801:case 808:case 815:case 822:case 829:case 905:case 912:case 919:case 926:case 1003:case 1010:case 1017:case 1024:case 1031:case 1107:case 1114:case 1121:case 1128:case 1205:case 1212:case 1219:case 1226:
		printf("WED"); break;
	case 104:case 111:case 118:case 125:case 201:case 208:case 215:case 222:case 301:case 308:case 315:case 322:case 329:case 405:case 412:case 419:case 426:case 503:case 510:case 517:case 524:case 531:case 607:case 614:case 621:case 628:case 705:case 712:case 719:case 726:case 802:case 809:case 816:case 823:case 830:case 906:case 913:case 920:case 927:case 1004:case 1011:case 1018:case 1025:case 1101:case 1108:case 1115:case 1122:case 1129:case 1206:case 1213:case 1220:case 1227:
		printf("THU"); break;
	case 105:case 112:case 119:case 126:case 202:case 209:case 216:case 223:case 302:case 309:case 316:case 323:case 330:case 406:case 413:case 420:case 427:case 504:case 511:case 518:case 525:case 601:case 608:case 615:case 622:case 629:case 706:case 713:case 720:case 727:case 803:case 810:case 817:case 824:case 831:case 907:case 914:case 921:case 928:case 1005:case 1012:case 1019:case 1026:case 1102:case 1109:case 1116:case 1123:case 1130:case 1207:case 1214:case 1221:case 1228:
		printf("FRI"); break;
	case 106:case 113:case 120:case 127:case 203:case 210:case 217:case 224:case 303:case 310:case 317:case 324:case 331:case 407:case 414:case 421:case 428:case 505:case 512:case 519:case 526:case 602:case 609:case 616:case 623:case 630:case 707:case 714:case 721:case 728:case 804:case 811:case 818:case 825:case 901:case 908:case 915:case 922:case 929:case 1006:case 1013:case 1020:case 1027:case 1103:case 1110:case 1117:case 1124:case 1201:case 1208:case 1215:case 1222:case 1229:
		printf("SAT"); break;
	default:
		printf("SUN"); break;
	}
	return 0;
}