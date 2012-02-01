#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CLocal_originType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CLocal_originType



namespace cutting_tool_schema_arm
{

class CLocal_originType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CLocal_originType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CLocal_originType(CLocal_originType const& init);
	void operator=(CLocal_originType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CLocal_originType); }
	MemberElement<CCartesian_point, _altova_mi_altova_CLocal_originType_altova_Cartesian_point> Cartesian_point;
	struct Cartesian_point { typedef Iterator<CCartesian_point> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CLocal_originType
