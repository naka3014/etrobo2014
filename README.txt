＜使用単語定義＞
	Stage	：各区間（難所区間）の共通の呼び方

＜makeのしかた＞ 2013/09/14 add by s.sahara
	機体の切り替えスイッチとコースのIN/OUT切り替えスイッチをmakeファイルで定義している。
	下記のコマンドのいずれかを実行する。

	西部機・IN側
		make -f Makefile.win all
	西部機・OUT側
		make -f Makefile.wout all
	東部機・IN側
		make -f Makefile.ein all
	東部機・OUT側
		make -f Makefile.eout all

	マクロdefine
		STEC_EASTスイッチ：機体切り替え用。bluetooth設定やジャイロオフセット値等機体固有の値がソース内で切り替えられる。
		MAKE_INSIDEスイッチ：コース切り替え用。

＜変更履歴＞
2012/09/15 k.nakagawa
	シーソーシングル成功分を反映

2012/09/02
	試走会２会場の光センサキャリブレーション後の画面表示値。
	・５９６
	・５５８

2012/09/01 s.sahara
	・公式サンプルコース用状態遷移追加。
	・光センサ入力にLPF2適用。（サンプルコースでは動作確認済み。レプリカコースはまだ。）
	その他修正

2012/08/20
	・キャリブレーションの値で走るように変更した

2012/08/19 k.nakagawa
	・ルックアップゲート攻略を坂道から開始するようにした。
	・坂道の処理をSlopeStageMainに移動し、頂上付近での空転が起こらないようにした。

2012/08/18 k.nakagawa
	・尻尾モータをPIDで制御するようにした。PIDゲインの調整も行った。

2012/08/18 s.sahara
	・光センサキャリブレーション追加（スタートに設置する前に、自走して線を横切らせる手順を追加）
	・LPF実装（坂田確認分）

2012/08/17 s.sahara
	・尻尾角度PID追加

2012/08/16 s.sahara
	・コーナ検知をマージ、距離＋コーナ検知を一部実装		◆動作確認未完◆

2012/08/15 s.sahara
	・OUTボーナスコース、直角コーナ後から難所抜きで停止まで完

2012/08/14 s.sahara
	・距離計追加
	・走行シーケンスに距離判定で加減速追加

2012/08/13 s.sahara
	・尻尾走行追加

2012/08/12 s.sahara
	・走行シーケンス調整中

2012/08/11 s.sahara
	・マーカ検知を走行シーケンスに実装
		（パルス検知版、結果ノイズに埋もれて動作安定せず。進入動作の安定が必要→距離計必要。）

2012/08/11 s.sahara
	・マーカ検知追加（パルス検知版）

2012/08/10 k.nakagawa
	・倒立走行からのルックアップゲート攻略完成

2012/08/09 k.nakagawa
	・ジャイロ検出関数完成(ジャイロの積算の変化量を監視)

2012/08/01 t.akiyama
	・LineTrace.hにdetect_step()を追加。段差検知機能を実装する。

2012/07/21 s.sahara
	・20112042.zipのetrobo2012sample(nxtOSEK)のsample_c4を元に、難所単体テスト用プログラム作成。（本番用は別途作る）
	・とりあえず坂道とルックアップゲートのメイン関数は作成したので、同様に他の難所分も作成して下さい。
	・変更する箇所には変更コメントと日付と変更者を書いて囲っておいて下さい。（他の人がマージしやすいよう配慮する）
	・変更内容と日付と変更者をREADME.txtに追記しておいて下さい。（ソース見渡さなくてもおよその変更履歴がわかるように）


＜ソース管理について＞

	リポジトリのURL
	https://stec201207.backlog.jp/svn/ET92_1/stecseibu

	TertoiseSVNの使い方
	http://www.backlog.jp/blog/2011/05/backlogsubversion-for-windows.html

	TortoiseSVNでWinMergeを使う
	http://d.hatena.ne.jp/replication/20110825/1314198140

