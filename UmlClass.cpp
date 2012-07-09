#include "UmlClass.h"
#include <sdk.h>
#include "wx/wxsf/CommonFcn.h"

UmlClass::UmlClass(wxRealPoint pos, wxSFDiagramManager* man): wxSFShapeBase(){
    //ctor
}

UmlClass::~UmlClass() {
	//dtor
}

wxRect wxSFShapeBase::GetBoundingBox()
{
	// Evaluations to determine how large the class shape is
	return wxRect();
}

void UmlClass::Draw(wxDC& dc) {
	//wxSFShapeBase::Draw(dc);
	Manager::Get()->GetLogManager()->Log(wxT("Drew stuff"));
}

void UmlClass::DrawSelected(wxDC& dc) {
	//wxSFRectShape::DrawSelected(dc);
	dc.SetPen(wxPen(m_nHoverColor, 1));
	Manager::Get()->GetLogManager()->Log(wxT("Drawn Selected"));
}

void UmlClass::DrawHover(wxDC& dc) {
	//wxSFRectShape::DrawHover(dc);
	dc.SetPen(wxPen(wxColor(0,0,0)));
	Manager::Get()->GetLogManager()->Log(wxT("Drawn Hovering"));
}