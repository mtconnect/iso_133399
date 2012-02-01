#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CRectangular_size
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CRectangular_size



namespace cutting_tool_schema_arm
{

class CRectangular_size : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CRectangular_size(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CRectangular_size(CRectangular_size const& init);
	void operator=(CRectangular_size const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CRectangular_size); }

	MemberAttribute<string_type,_altova_mi_altova_CRectangular_size_altova_id, 0, 0> id;	// id CID

	MemberAttribute<string_type,_altova_mi_altova_CRectangular_size_altova_ref, 0, 0> ref;	// ref Cstring
	MemberElement<CDensityType, _altova_mi_altova_CRectangular_size_altova_Density> Density;
	struct Density { typedef Iterator<CDensityType> iterator; };
	MemberElement<CHeightType, _altova_mi_altova_CRectangular_size_altova_Height> Height;
	struct Height { typedef Iterator<CHeightType> iterator; };
	MemberElement<CWidthType, _altova_mi_altova_CRectangular_size_altova_Width> Width;
	struct Width { typedef Iterator<CWidthType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CRectangular_size
