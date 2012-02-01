#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CPage_countType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CPage_countType



namespace cutting_tool_schema_arm
{

class CPage_countType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CPage_countType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CPage_countType(CPage_countType const& init);
	void operator=(CPage_countType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CPage_countType); }
	MemberElement<CValue_with_unit, _altova_mi_altova_CPage_countType_altova_Value_with_unit> Value_with_unit;
	struct Value_with_unit { typedef Iterator<CValue_with_unit> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CPage_countType
