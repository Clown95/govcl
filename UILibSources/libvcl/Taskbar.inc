
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function Taskbar_Create(AOwner: TComponent): TTaskbar; stdcall;
begin
  Result :=  TTaskbar.Create(AOwner);
end;

procedure Taskbar_Free(AObj: TTaskbar); stdcall;
begin
  AObj.Free;
end;

procedure Taskbar_DoThumbButtonNotify(AObj: TTaskbar; ItemID: Word); stdcall;
begin
  AObj.DoThumbButtonNotify(ItemID);
end;

procedure Taskbar_DoThumbPreviewRequest(AObj: TTaskbar; APreviewHeight: Word; APreviewWidth: Word); stdcall;
begin
  AObj.DoThumbPreviewRequest(APreviewHeight, APreviewWidth);
end;

procedure Taskbar_DoWindowPreviewRequest(AObj: TTaskbar); stdcall;
begin
  AObj.DoWindowPreviewRequest;
end;

procedure Taskbar_UnregisterTab(AObj: TTaskbar); stdcall;
begin
  AObj.UnregisterTab;
end;

procedure Taskbar_ApplyButtonsChanges(AObj: TTaskbar); stdcall;
begin
  AObj.ApplyButtonsChanges;
end;

function Taskbar_GetMainWindowHwnd(AObj: TTaskbar): HWND; stdcall;
begin
  Result :=  AObj.GetMainWindowHwnd;
end;

function Taskbar_GetOverlayHIcon(AObj: TTaskbar): HICON; stdcall;
begin
  Result :=  AObj.GetOverlayHIcon;
end;

function Taskbar_ActivateTab(AObj: TTaskbar): LongBool; stdcall;
begin
  Result :=  AObj.ActivateTab;
end;

procedure Taskbar_InvalidateThumbPreview(AObj: TTaskbar); stdcall;
begin
  AObj.InvalidateThumbPreview;
end;

procedure Taskbar_UpdateTab(AObj: TTaskbar); stdcall;
begin
  AObj.UpdateTab;
end;

procedure Taskbar_CheckApplyChanges(AObj: TTaskbar); stdcall;
begin
  AObj.CheckApplyChanges;
end;

procedure Taskbar_ApplyChanges(AObj: TTaskbar); stdcall;
begin
  AObj.ApplyChanges;
end;

procedure Taskbar_ApplyOverlayChanges(AObj: TTaskbar); stdcall;
begin
  AObj.ApplyOverlayChanges;
end;

procedure Taskbar_ApplyProgressChanges(AObj: TTaskbar); stdcall;
begin
  AObj.ApplyProgressChanges;
end;

procedure Taskbar_ApplyTabsChanges(AObj: TTaskbar); stdcall;
begin
  AObj.ApplyTabsChanges;
end;

procedure Taskbar_ApplyClipAreaChanges(AObj: TTaskbar); stdcall;
begin
  AObj.ApplyClipAreaChanges;
end;

procedure Taskbar_ClearClipArea(AObj: TTaskbar); stdcall;
begin
  AObj.ClearClipArea;
end;

function Taskbar_FindComponent(AObj: TTaskbar; AName: PChar): TComponent; stdcall;
begin
  Result :=  AObj.FindComponent(AName);
end;

function Taskbar_GetNamePath(AObj: TTaskbar): PChar; stdcall;
begin
  Result :=  PChar(AObj.GetNamePath);
end;

function Taskbar_HasParent(AObj: TTaskbar): LongBool; stdcall;
begin
  Result :=  AObj.HasParent;
end;

procedure Taskbar_Assign(AObj: TTaskbar; Source: TPersistent); stdcall;
begin
  AObj.Assign(Source);
end;

procedure Taskbar_DisposeOf(AObj: TTaskbar); stdcall;
begin
  AObj.DisposeOf;
end;

function Taskbar_ClassType(AObj: TTaskbar): TClass; stdcall;
begin
  Result :=  AObj.ClassType;
end;

function Taskbar_ClassName(AObj: TTaskbar): PChar; stdcall;
begin
  Result :=  PChar(AObj.ClassName);
end;

function Taskbar_InstanceSize(AObj: TTaskbar): Integer; stdcall;
begin
  Result :=  AObj.InstanceSize;
end;

function Taskbar_InheritsFrom(AObj: TTaskbar; AClass: TClass): LongBool; stdcall;
begin
  Result :=  AObj.InheritsFrom(AClass);
end;

function Taskbar_Equals(AObj: TTaskbar; Obj: TObject): LongBool; stdcall;
begin
  Result :=  AObj.Equals(Obj);
end;

function Taskbar_GetHashCode(AObj: TTaskbar): Integer; stdcall;
begin
  Result :=  AObj.GetHashCode;
end;

function Taskbar_ToString(AObj: TTaskbar): PChar; stdcall;
begin
  Result :=  PChar(AObj.ToString);
end;

function Taskbar_GetTaskBarButtons(AObj: TTaskbar): TThumbBarButtonList; stdcall;
begin
  Result :=  AObj.TaskBarButtons;
end;

procedure Taskbar_SetTaskBarButtons(AObj: TTaskbar; AValue: TThumbBarButtonList); stdcall;
begin
  AObj.TaskBarButtons := AValue;
end;

function Taskbar_GetProgressState(AObj: TTaskbar): TTaskBarProgressState; stdcall;
begin
  Result :=  AObj.ProgressState;
end;

procedure Taskbar_SetProgressState(AObj: TTaskbar; AValue: TTaskBarProgressState); stdcall;
begin
  AObj.ProgressState := AValue;
end;

procedure Taskbar_GetProgressMaxValue(AObj: TTaskbar; var Result: Int64); stdcall;
begin
  Result :=  AObj.ProgressMaxValue;
end;

procedure Taskbar_SetProgressMaxValue(AObj: TTaskbar; var AValue: Int64); stdcall;
begin
  AObj.ProgressMaxValue := AValue;
end;

procedure Taskbar_GetProgressValue(AObj: TTaskbar; var Result: Int64); stdcall;
begin
  Result :=  AObj.ProgressValue;
end;

procedure Taskbar_SetProgressValue(AObj: TTaskbar; var AValue: Int64); stdcall;
begin
  AObj.ProgressValue := AValue;
end;

function Taskbar_GetOverlayIcon(AObj: TTaskbar): TIcon; stdcall;
begin
  Result :=  AObj.OverlayIcon;
end;

procedure Taskbar_SetOverlayIcon(AObj: TTaskbar; AValue: TIcon); stdcall;
begin
  AObj.OverlayIcon := AValue;
end;

function Taskbar_GetOverlayHint(AObj: TTaskbar): PChar; stdcall;
begin
  Result :=  PChar(AObj.OverlayHint);
end;

procedure Taskbar_SetOverlayHint(AObj: TTaskbar; AValue: PChar); stdcall;
begin
  AObj.OverlayHint := AValue;
end;

function Taskbar_GetPreviewClipRegion(AObj: TTaskbar): TPreviewClipRegion; stdcall;
begin
  Result :=  AObj.PreviewClipRegion;
end;

procedure Taskbar_SetPreviewClipRegion(AObj: TTaskbar; AValue: TPreviewClipRegion); stdcall;
begin
  AObj.PreviewClipRegion := AValue;
end;

function Taskbar_GetTabProperties(AObj: TTaskbar): TThumbTabProperties; stdcall;
begin
  Result :=  AObj.TabProperties;
end;

procedure Taskbar_SetTabProperties(AObj: TTaskbar; AValue: TThumbTabProperties); stdcall;
begin
  AObj.TabProperties := AValue;
end;

function Taskbar_GetToolTip(AObj: TTaskbar): PChar; stdcall;
begin
  Result :=  PChar(AObj.ToolTip);
end;

procedure Taskbar_SetToolTip(AObj: TTaskbar; AValue: PChar); stdcall;
begin
  AObj.ToolTip := AValue;
end;

procedure Taskbar_SetOnThumbPreviewRequest(AObj: TTaskbar; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnThumbPreviewRequest := nil;
    TEventClass.Remove(AObj, geTaskbarThumbPreviewRequest);
    Exit;
  end;
  AObj.OnThumbPreviewRequest := TEventClass.TaskbarOnThumbPreviewRequest;
  TEventClass.Add(AObj, geTaskbarThumbPreviewRequest, AEventId);
end;

procedure Taskbar_SetOnWindowPreviewItemRequest(AObj: TTaskbar; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnWindowPreviewItemRequest := nil;
    TEventClass.Remove(AObj, geTaskbarWindowPreviewItemRequest);
    Exit;
  end;
  AObj.OnWindowPreviewItemRequest := TEventClass.TaskbarOnWindowPreviewItemRequest;
  TEventClass.Add(AObj, geTaskbarWindowPreviewItemRequest, AEventId);
end;

procedure Taskbar_SetOnThumbButtonClick(AObj: TTaskbar; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnThumbButtonClick := nil;
    TEventClass.Remove(AObj, geTaskbarThumbButtonClick);
    Exit;
  end;
  AObj.OnThumbButtonClick := TEventClass.TaskbarOnThumbButtonClick;
  TEventClass.Add(AObj, geTaskbarThumbButtonClick, AEventId);
end;

function Taskbar_GetTaskbarIsAvailable(AObj: TTaskbar): LongBool; stdcall;
begin
  Result :=  AObj.TaskbarIsAvailable;
end;

function Taskbar_GetComponentCount(AObj: TTaskbar): Integer; stdcall;
begin
  Result :=  AObj.ComponentCount;
end;

function Taskbar_GetComponentIndex(AObj: TTaskbar): Integer; stdcall;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure Taskbar_SetComponentIndex(AObj: TTaskbar; AValue: Integer); stdcall;
begin
  AObj.ComponentIndex := AValue;
end;

function Taskbar_GetOwner(AObj: TTaskbar): TComponent; stdcall;
begin
  Result :=  AObj.Owner;
end;

function Taskbar_GetName(AObj: TTaskbar): PChar; stdcall;
begin
  Result :=  PChar(AObj.Name);
end;

procedure Taskbar_SetName(AObj: TTaskbar; AValue: PChar); stdcall;
begin
  AObj.Name := AValue;
end;

function Taskbar_GetTag(AObj: TTaskbar): NativeInt; stdcall;
begin
  Result :=  AObj.Tag;
end;

procedure Taskbar_SetTag(AObj: TTaskbar; AValue: NativeInt); stdcall;
begin
  AObj.Tag := AValue;
end;

function Taskbar_GetComponents(AObj: TTaskbar; AIndex: Integer): TComponent; stdcall;
begin
  Result :=  AObj.Components[AIndex];
end;

function Taskbar_StaticClassType: TClass; stdcall;
begin
  Result := TTaskbar;
end;

exports
  Taskbar_Create,
  Taskbar_Free,
  Taskbar_DoThumbButtonNotify,
  Taskbar_DoThumbPreviewRequest,
  Taskbar_DoWindowPreviewRequest,
  Taskbar_UnregisterTab,
  Taskbar_ApplyButtonsChanges,
  Taskbar_GetMainWindowHwnd,
  Taskbar_GetOverlayHIcon,
  Taskbar_ActivateTab,
  Taskbar_InvalidateThumbPreview,
  Taskbar_UpdateTab,
  Taskbar_CheckApplyChanges,
  Taskbar_ApplyChanges,
  Taskbar_ApplyOverlayChanges,
  Taskbar_ApplyProgressChanges,
  Taskbar_ApplyTabsChanges,
  Taskbar_ApplyClipAreaChanges,
  Taskbar_ClearClipArea,
  Taskbar_FindComponent,
  Taskbar_GetNamePath,
  Taskbar_HasParent,
  Taskbar_Assign,
  Taskbar_DisposeOf,
  Taskbar_ClassType,
  Taskbar_ClassName,
  Taskbar_InstanceSize,
  Taskbar_InheritsFrom,
  Taskbar_Equals,
  Taskbar_GetHashCode,
  Taskbar_ToString,
  Taskbar_GetTaskBarButtons,
  Taskbar_SetTaskBarButtons,
  Taskbar_GetProgressState,
  Taskbar_SetProgressState,
  Taskbar_GetProgressMaxValue,
  Taskbar_SetProgressMaxValue,
  Taskbar_GetProgressValue,
  Taskbar_SetProgressValue,
  Taskbar_GetOverlayIcon,
  Taskbar_SetOverlayIcon,
  Taskbar_GetOverlayHint,
  Taskbar_SetOverlayHint,
  Taskbar_GetPreviewClipRegion,
  Taskbar_SetPreviewClipRegion,
  Taskbar_GetTabProperties,
  Taskbar_SetTabProperties,
  Taskbar_GetToolTip,
  Taskbar_SetToolTip,
  Taskbar_SetOnThumbPreviewRequest,
  Taskbar_SetOnWindowPreviewItemRequest,
  Taskbar_SetOnThumbButtonClick,
  Taskbar_GetTaskbarIsAvailable,
  Taskbar_GetComponentCount,
  Taskbar_GetComponentIndex,
  Taskbar_SetComponentIndex,
  Taskbar_GetOwner,
  Taskbar_GetName,
  Taskbar_SetName,
  Taskbar_GetTag,
  Taskbar_SetTag,
  Taskbar_GetComponents,
  Taskbar_StaticClassType;

