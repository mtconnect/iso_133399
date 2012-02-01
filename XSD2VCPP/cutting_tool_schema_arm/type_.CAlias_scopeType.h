#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAlias_scopeType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAlias_scopeType



namespace cutting_tool_schema_arm
{

class CAlias_scopeType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CAlias_scopeType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CAlias_scopeType(CAlias_scopeType const& init);
	void operator=(CAlias_scopeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CAlias_scopeType); }
	MemberElement<COrganization, _altova_mi_altova_CAlias_scopeType_altova_Organization> Organization;
	struct Organization { typedef Iterator<COrganization> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAlias_scopeType
