<GameFile>
  <PropertyGroup Name="MainScene" Type="Scene" ID="a2ee0952-26b5-49ae-8bf9-4f1d6279b798" Version="3.10.0.0" />
  <Content ctype="GameProjectContent">
    <Content>
      <Animation Duration="0" Speed="1.0000" />
      <ObjectData Name="Scene" ctype="GameNodeObjectData">
        <Size X="960.0000" Y="640.0000" />
        <Children>
          <AbstractNodeData Name="tollgateBG_1" ActionTag="-1933566779" IconVisible="False" LeftMargin="230.0001" RightMargin="229.9999" TopMargin="167.9602" BottomMargin="161.0398" ctype="SpriteObjectData">
            <Size X="500.0000" Y="311.0000" />
            <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
            <Position X="480.0001" Y="316.5398" />
            <Scale ScaleX="1.9493" ScaleY="2.0200" />
            <CColor A="255" R="255" G="255" B="255" />
            <PrePosition X="0.5000" Y="0.4946" />
            <PreSize X="0.5208" Y="0.4859" />
            <FileData Type="Normal" Path="tollgateBG.png" Plist="" />
            <BlendFunc Src="1" Dst="771" />
          </AbstractNodeData>
          <AbstractNodeData Name="tollgateBG_2" ActionTag="134369120" IconVisible="False" LeftMargin="228.7958" RightMargin="231.2042" TopMargin="168.7735" BottomMargin="160.2265" FlipX="True" ctype="SpriteObjectData">
            <Size X="500.0000" Y="311.0000" />
            <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
            <Position X="478.7958" Y="315.7265" />
            <Scale ScaleX="1.9493" ScaleY="2.0200" />
            <CColor A="255" R="255" G="255" B="255" />
            <PrePosition X="0.4987" Y="0.4933" />
            <PreSize X="0.5208" Y="0.4859" />
            <FileData Type="Normal" Path="tollgateBG.png" Plist="" />
            <BlendFunc Src="1" Dst="771" />
          </AbstractNodeData>
          <AbstractNodeData Name="sprite" ActionTag="41733259" Tag="5" IconVisible="False" LeftMargin="424.3800" RightMargin="375.6200" TopMargin="213.9236" BottomMargin="-18.9236" ctype="SpriteObjectData">
            <Size X="160.0000" Y="445.0000" />
            <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
            <Position X="504.3800" Y="203.5764" />
            <Scale ScaleX="1.0000" ScaleY="0.6063" />
            <CColor A="255" R="255" G="255" B="255" />
            <PrePosition X="0.5254" Y="0.3181" />
            <PreSize X="0.1667" Y="0.6953" />
            <FileData Type="Normal" Path="sprite.png" Plist="" />
            <BlendFunc Src="1" Dst="771" />
          </AbstractNodeData>
          <AbstractNodeData Name="Jump" ActionTag="860452322" Tag="6" IconVisible="False" LeftMargin="870.3739" RightMargin="43.6261" TopMargin="575.6322" BottomMargin="28.3678" TouchEnable="True" FontSize="14" ButtonText="跳跃" Scale9Enable="True" LeftEage="15" RightEage="15" TopEage="11" BottomEage="11" Scale9OriginX="15" Scale9OriginY="11" Scale9Width="16" Scale9Height="14" ShadowOffsetX="2.0000" ShadowOffsetY="-2.0000" ctype="ButtonObjectData">
            <Size X="46.0000" Y="36.0000" />
            <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
            <Position X="893.3739" Y="46.3678" />
            <Scale ScaleX="1.9414" ScaleY="1.6014" />
            <CColor A="255" R="255" G="255" B="255" />
            <PrePosition X="0.9306" Y="0.0724" />
            <PreSize X="0.0479" Y="0.0562" />
            <TextColor A="255" R="65" G="65" B="70" />
            <DisabledFileData Type="Default" Path="Default/Button_Disable.png" Plist="" />
            <PressedFileData Type="Default" Path="Default/Button_Press.png" Plist="" />
            <NormalFileData Type="Default" Path="Default/Button_Normal.png" Plist="" />
            <OutlineColor A="255" R="255" G="0" B="0" />
            <ShadowColor A="255" R="110" G="110" B="110" />
          </AbstractNodeData>
          <AbstractNodeData Name="Text_1" ActionTag="790693465" Tag="6" IconVisible="False" LeftMargin="27.1819" RightMargin="892.8181" TopMargin="551.2314" BottomMargin="48.7686" FontSize="20" LabelText="得分&#xA;" ShadowOffsetX="2.0000" ShadowOffsetY="-2.0000" ctype="TextObjectData">
            <Size X="40.0000" Y="40.0000" />
            <AnchorPoint ScaleX="-0.1065" ScaleY="0.7045" />
            <Position X="22.9236" Y="76.9470" />
            <Scale ScaleX="1.8060" ScaleY="1.7941" />
            <CColor A="255" R="255" G="255" B="255" />
            <PrePosition X="0.0239" Y="0.1202" />
            <PreSize X="0.0417" Y="0.0625" />
            <OutlineColor A="255" R="255" G="0" B="0" />
            <ShadowColor A="255" R="110" G="110" B="110" />
          </AbstractNodeData>
          <AbstractNodeData Name="score" ActionTag="1332042065" Tag="8" IconVisible="False" LeftMargin="183.7926" RightMargin="726.2074" TopMargin="567.4598" BottomMargin="32.5402" IsCustomSize="True" FontSize="20" LabelText="00&#xA;" ShadowOffsetX="2.0000" ShadowOffsetY="-2.0000" ctype="TextObjectData">
            <Size X="50.0000" Y="40.0000" />
            <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
            <Position X="208.7926" Y="52.5402" />
            <Scale ScaleX="3.5158" ScaleY="2.5020" />
            <CColor A="255" R="255" G="255" B="255" />
            <PrePosition X="0.2175" Y="0.0821" />
            <PreSize X="0.0521" Y="0.0625" />
            <OutlineColor A="255" R="255" G="0" B="0" />
            <ShadowColor A="255" R="110" G="110" B="110" />
          </AbstractNodeData>
          <AbstractNodeData Name="HP" ActionTag="2095041367" Tag="9" IconVisible="False" LeftMargin="123.8102" RightMargin="636.1898" TopMargin="606.7437" BottomMargin="19.2563" ProgressInfo="56" ctype="LoadingBarObjectData">
            <Size X="200.0000" Y="14.0000" />
            <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
            <Position X="223.8102" Y="26.2563" />
            <Scale ScaleX="1.0000" ScaleY="1.0000" />
            <CColor A="255" R="255" G="0" B="0" />
            <PrePosition X="0.2331" Y="0.0410" />
            <PreSize X="0.2083" Y="0.0219" />
            <ImageFileData Type="Default" Path="Default/LoadingBarFile.png" Plist="" />
          </AbstractNodeData>
          <AbstractNodeData Name="Text_3" ActionTag="-296336957" Tag="10" IconVisible="False" LeftMargin="55.3546" RightMargin="884.6454" TopMargin="608.7307" BottomMargin="-8.7307" FontSize="20" LabelText="HP&#xA;" ShadowOffsetX="2.0000" ShadowOffsetY="-2.0000" ctype="TextObjectData">
            <Size X="20.0000" Y="40.0000" />
            <AnchorPoint ScaleX="0.5375" ScaleY="0.3584" />
            <Position X="66.1050" Y="5.6044" />
            <Scale ScaleX="2.5020" ScaleY="1.6571" />
            <CColor A="255" R="255" G="255" B="255" />
            <PrePosition X="0.0689" Y="0.0088" />
            <PreSize X="0.0208" Y="0.0625" />
            <OutlineColor A="255" R="255" G="0" B="0" />
            <ShadowColor A="255" R="110" G="110" B="110" />
          </AbstractNodeData>
        </Children>
      </ObjectData>
    </Content>
  </Content>
</GameFile>