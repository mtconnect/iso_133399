#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CLocationType2
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CLocationType2



namespace cutting_tool_schema_arm
{

class CLocationType2 : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CLocationType2(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CLocationType2(CLocationType2 const& init);
	void operator=(CLocationType2 const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CLocationType2); }
	MemberElement<CLocation, _altova_mi_altova_CLocationType2_altova_Location> Location;
	struct Location { typedef Iterator<CLocation> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CLocationType2
