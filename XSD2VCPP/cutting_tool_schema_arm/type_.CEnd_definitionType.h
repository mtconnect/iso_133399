#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CEnd_definitionType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CEnd_definitionType



namespace cutting_tool_schema_arm
{

class CEnd_definitionType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CEnd_definitionType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CEnd_definitionType(CEnd_definitionType const& init);
	void operator=(CEnd_definitionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CEnd_definitionType); }
	MemberElement<CDate_time, _altova_mi_altova_CEnd_definitionType_altova_Date_time> Date_time;
	struct Date_time { typedef Iterator<CDate_time> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CEnd_definitionType
