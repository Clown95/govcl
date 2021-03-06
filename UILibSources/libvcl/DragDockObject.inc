
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright ? ying32. All Rights Reserved.
//
//----------------------------------------

function DragDockObject_Create(AOwner: TControl): TDragDockObject; stdcall;
begin
  Result :=  TDragDockObject.Create(AOwner);
end;

procedure DragDockObject_Free(AObj: TDragDockObject); stdcall;
begin
  AObj.Free;
end;

procedure DragDockObject_Assign(AObj: TDragDockObject; Source: TDragObject); stdcall;
begin
  AObj.Assign(Source);
end;

procedure DragDockObject_HideDragImage(AObj: TDragDockObject); stdcall;
begin
  AObj.HideDragImage;
end;

procedure DragDockObject_ShowDragImage(AObj: TDragDockObject); stdcall;
begin
  AObj.ShowDragImage;
end;

procedure DragDockObject_DisposeOf(AObj: TDragDockObject); stdcall;
begin
  AObj.DisposeOf;
end;

function DragDockObject_ClassType(AObj: TDragDockObject): TClass; stdcall;
begin
  Result :=  AObj.ClassType;
end;

function DragDockObject_ClassName(AObj: TDragDockObject): PChar; stdcall;
begin
  Result :=  PChar(AObj.ClassName);
end;

function DragDockObject_InstanceSize(AObj: TDragDockObject): Integer; stdcall;
begin
  Result :=  AObj.InstanceSize;
end;

function DragDockObject_InheritsFrom(AObj: TDragDockObject; AClass: TClass): LongBool; stdcall;
begin
  Result :=  AObj.InheritsFrom(AClass);
end;

function DragDockObject_Equals(AObj: TDragDockObject; Obj: TObject): LongBool; stdcall;
begin
  Result :=  AObj.Equals(Obj);
end;

function DragDockObject_GetHashCode(AObj: TDragDockObject): Integer; stdcall;
begin
  Result :=  AObj.GetHashCode;
end;

function DragDockObject_ToString(AObj: TDragDockObject): PChar; stdcall;
begin
  Result :=  PChar(AObj.ToString);
end;

function DragDockObject_GetBrush(AObj: TDragDockObject): TBrush; stdcall;
begin
  Result :=  AObj.Brush;
end;

procedure DragDockObject_SetBrush(AObj: TDragDockObject; AValue: TBrush); stdcall;
begin
  AObj.Brush := AValue;
end;

procedure DragDockObject_GetDockRect(AObj: TDragDockObject; var Result: TRect); stdcall;
begin
  Result :=  AObj.DockRect;
end;

procedure DragDockObject_SetDockRect(AObj: TDragDockObject; var AValue: TRect); stdcall;
begin
  AObj.DockRect := AValue;
end;

function DragDockObject_GetDropAlign(AObj: TDragDockObject): TAlign; stdcall;
begin
  Result :=  AObj.DropAlign;
end;

function DragDockObject_GetDropOnControl(AObj: TDragDockObject): TControl; stdcall;
begin
  Result :=  AObj.DropOnControl;
end;

procedure DragDockObject_GetEraseDockRect(AObj: TDragDockObject; var Result: TRect); stdcall;
begin
  Result :=  AObj.EraseDockRect;
end;

procedure DragDockObject_SetEraseDockRect(AObj: TDragDockObject; var AValue: TRect); stdcall;
begin
  AObj.EraseDockRect := AValue;
end;

function DragDockObject_GetEraseWhenMoving(AObj: TDragDockObject): LongBool; stdcall;
begin
  Result :=  AObj.EraseWhenMoving;
end;

function DragDockObject_GetFloating(AObj: TDragDockObject): LongBool; stdcall;
begin
  Result :=  AObj.Floating;
end;

procedure DragDockObject_SetFloating(AObj: TDragDockObject; AValue: LongBool); stdcall;
begin
  AObj.Floating := AValue;
end;

function DragDockObject_GetFrameWidth(AObj: TDragDockObject): Integer; stdcall;
begin
  Result :=  AObj.FrameWidth;
end;

function DragDockObject_GetControl(AObj: TDragDockObject): TControl; stdcall;
begin
  Result :=  AObj.Control;
end;

procedure DragDockObject_SetControl(AObj: TDragDockObject; AValue: TControl); stdcall;
begin
  AObj.Control := AValue;
end;

function DragDockObject_GetAlwaysShowDragImages(AObj: TDragDockObject): LongBool; stdcall;
begin
  Result :=  AObj.AlwaysShowDragImages;
end;

procedure DragDockObject_SetAlwaysShowDragImages(AObj: TDragDockObject; AValue: LongBool); stdcall;
begin
  AObj.AlwaysShowDragImages := AValue;
end;

function DragDockObject_GetCancelling(AObj: TDragDockObject): LongBool; stdcall;
begin
  Result :=  AObj.Cancelling;
end;

procedure DragDockObject_SetCancelling(AObj: TDragDockObject; AValue: LongBool); stdcall;
begin
  AObj.Cancelling := AValue;
end;

function DragDockObject_GetDragHandle(AObj: TDragDockObject): HWND; stdcall;
begin
  Result :=  AObj.DragHandle;
end;

procedure DragDockObject_SetDragHandle(AObj: TDragDockObject; AValue: HWND); stdcall;
begin
  AObj.DragHandle := AValue;
end;

procedure DragDockObject_GetDragPos(AObj: TDragDockObject; var Result: TPoint); stdcall;
begin
  Result :=  AObj.DragPos;
end;

procedure DragDockObject_SetDragPos(AObj: TDragDockObject; var AValue: TPoint); stdcall;
begin
  AObj.DragPos := AValue;
end;

function DragDockObject_GetDragTarget(AObj: TDragDockObject): Pointer; stdcall;
begin
  Result :=  AObj.DragTarget;
end;

procedure DragDockObject_SetDragTarget(AObj: TDragDockObject; AValue: Pointer); stdcall;
begin
  AObj.DragTarget := AValue;
end;

procedure DragDockObject_GetDragTargetPos(AObj: TDragDockObject; var Result: TPoint); stdcall;
begin
  Result :=  AObj.DragTargetPos;
end;

procedure DragDockObject_SetDragTargetPos(AObj: TDragDockObject; var AValue: TPoint); stdcall;
begin
  AObj.DragTargetPos := AValue;
end;

function DragDockObject_GetDropped(AObj: TDragDockObject): LongBool; stdcall;
begin
  Result :=  AObj.Dropped;
end;

procedure DragDockObject_GetMouseDeltaX(AObj: TDragDockObject; var Result: Double); stdcall;
begin
  Result :=  AObj.MouseDeltaX;
end;

procedure DragDockObject_GetMouseDeltaY(AObj: TDragDockObject; var Result: Double); stdcall;
begin
  Result :=  AObj.MouseDeltaY;
end;

function DragDockObject_GetRightClickCancels(AObj: TDragDockObject): LongBool; stdcall;
begin
  Result :=  AObj.RightClickCancels;
end;

procedure DragDockObject_SetRightClickCancels(AObj: TDragDockObject; AValue: LongBool); stdcall;
begin
  AObj.RightClickCancels := AValue;
end;

function DragDockObject_StaticClassType: TClass; stdcall;
begin
  Result := TDragDockObject;
end;

exports
  DragDockObject_Create,
  DragDockObject_Free,
  DragDockObject_Assign,
  DragDockObject_HideDragImage,
  DragDockObject_ShowDragImage,
  DragDockObject_DisposeOf,
  DragDockObject_ClassType,
  DragDockObject_ClassName,
  DragDockObject_InstanceSize,
  DragDockObject_InheritsFrom,
  DragDockObject_Equals,
  DragDockObject_GetHashCode,
  DragDockObject_ToString,
  DragDockObject_GetBrush,
  DragDockObject_SetBrush,
  DragDockObject_GetDockRect,
  DragDockObject_SetDockRect,
  DragDockObject_GetDropAlign,
  DragDockObject_GetDropOnControl,
  DragDockObject_GetEraseDockRect,
  DragDockObject_SetEraseDockRect,
  DragDockObject_GetEraseWhenMoving,
  DragDockObject_GetFloating,
  DragDockObject_SetFloating,
  DragDockObject_GetFrameWidth,
  DragDockObject_GetControl,
  DragDockObject_SetControl,
  DragDockObject_GetAlwaysShowDragImages,
  DragDockObject_SetAlwaysShowDragImages,
  DragDockObject_GetCancelling,
  DragDockObject_SetCancelling,
  DragDockObject_GetDragHandle,
  DragDockObject_SetDragHandle,
  DragDockObject_GetDragPos,
  DragDockObject_SetDragPos,
  DragDockObject_GetDragTarget,
  DragDockObject_SetDragTarget,
  DragDockObject_GetDragTargetPos,
  DragDockObject_SetDragTargetPos,
  DragDockObject_GetDropped,
  DragDockObject_GetMouseDeltaX,
  DragDockObject_GetMouseDeltaY,
  DragDockObject_GetRightClickCancels,
  DragDockObject_SetRightClickCancels,
  DragDockObject_StaticClassType;

