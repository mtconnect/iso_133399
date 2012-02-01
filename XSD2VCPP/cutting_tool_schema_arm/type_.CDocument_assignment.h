#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDocument_assignment
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDocument_assignment



namespace cutting_tool_schema_arm
{

class CDocument_assignment : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CDocument_assignment(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CDocument_assignment(CDocument_assignment const& init);
	void operator=(CDocument_assignment const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CDocument_assignment); }

	MemberAttribute<string_type,_altova_mi_altova_CDocument_assignment_altova_id, 0, 0> id;	// id CID

	MemberAttribute<string_type,_altova_mi_altova_CDocument_assignment_altova_ref, 0, 0> ref;	// ref Cstring
	MemberElement<CAssigned_documentType, _altova_mi_altova_CDocument_assignment_altova_Assigned_document> Assigned_document;
	struct Assigned_document { typedef Iterator<CAssigned_documentType> iterator; };
	MemberElement<CIs_assigned_toType, _altova_mi_altova_CDocument_assignment_altova_Is_assigned_to> Is_assigned_to;
	struct Is_assigned_to { typedef Iterator<CIs_assigned_toType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_CDocument_assignment_altova_Role> Role;
	struct Role { typedef Iterator<xs::CstringType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDocument_assignment
