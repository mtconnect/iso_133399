#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CValidity_contextType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CValidity_contextType



namespace cutting_tool_schema_arm
{

class CValidity_contextType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CValidity_contextType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CValidity_contextType(CValidity_contextType const& init);
	void operator=(CValidity_contextType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CValidity_contextType); }
	MemberElement<COrganization, _altova_mi_altova_CValidity_contextType_altova_Organization> Organization;
	struct Organization { typedef Iterator<COrganization> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CValidity_contextType
