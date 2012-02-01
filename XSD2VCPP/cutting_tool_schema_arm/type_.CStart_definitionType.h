#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CStart_definitionType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CStart_definitionType



namespace cutting_tool_schema_arm
{

class CStart_definitionType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CStart_definitionType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CStart_definitionType(CStart_definitionType const& init);
	void operator=(CStart_definitionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CStart_definitionType); }
	MemberElement<CDate_time, _altova_mi_altova_CStart_definitionType_altova_Date_time> Date_time;
	struct Date_time { typedef Iterator<CDate_time> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CStart_definitionType
