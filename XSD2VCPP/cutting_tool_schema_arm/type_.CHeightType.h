#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CHeightType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CHeightType



namespace cutting_tool_schema_arm
{

class CHeightType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CHeightType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CHeightType(CHeightType const& init);
	void operator=(CHeightType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CHeightType); }
	MemberElement<CValue_with_unit, _altova_mi_altova_CHeightType_altova_Value_with_unit> Value_with_unit;
	struct Value_with_unit { typedef Iterator<CValue_with_unit> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CHeightType
