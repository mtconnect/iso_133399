#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CRelatedType3
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CRelatedType3



namespace cutting_tool_schema_arm
{

class CRelatedType3 : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CRelatedType3(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CRelatedType3(CRelatedType3 const& init);
	void operator=(CRelatedType3 const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CRelatedType3); }
	MemberElement<CDocument_version, _altova_mi_altova_CRelatedType3_altova_Document_version> Document_version;
	struct Document_version { typedef Iterator<CDocument_version> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CRelatedType3
